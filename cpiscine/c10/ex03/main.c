/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:45:24 by tanota            #+#    #+#             */
/*   Updated: 2022/11/17 16:47:25 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	is_last_file(int fileIndex, t_config conf)
{
	if (fileIndex >= conf.lastfileidx - conf.firstfileidx)
		return (1);
	return (0);
}

int	get_next_valid_file(int	*currentFile, t_config conf, int *fd)
{
	while (!is_last_file(*currentFile - 1, conf))
	{
		*fd = open(conf.argv[*currentFile + conf.firstfileidx], O_RDONLY);
		if (*fd < 0)
		{
			exception_handler(conf.argv[*currentFile + conf.firstfileidx],
				conf.argv[0]);
			close(*fd);
		}
		else
			return (*fd);
		(*currentFile)++;
	}
	return (-1);
}

void	exception_handler(char *filename, char *binary_name)
{
	write(STDERR, basename(binary_name), ft_strlen(basename(binary_name)));
	write(STDERR, ": ", 2);
	write(STDERR, filename, ft_strlen(filename));
	write(STDERR, ": ", 2);
	ft_putstr(strerror(errno), STDERR);
	write(STDERR, "\n", 1);
}

t_config	argparser(int argc, char **argv)
{
	t_config	conf;

	conf.readfromstdin = 0;
	conf.firstfileidx = -1;
	conf.lastfileidx = -1;
	conf.hasoption = 0;
	conf.argv = argv;
	if (argc < 2 || (argc < 3 && ft_strcmp("-C", argv[1]) == 0))
		conf.readfromstdin = 1;
	if (argc >= 2 && ft_strcmp("-C", argv[1]) == 0)
		conf.hasoption = 1;
	if (conf.hasoption && !conf.readfromstdin)
		conf.firstfileidx = 2;
	else if (!conf.readfromstdin)
		conf.firstfileidx = 1;
	if (!conf.readfromstdin && !conf.hasoption)
		conf.lastfileidx = argc - conf.firstfileidx;
	else if (!conf.readfromstdin && conf.hasoption)
		conf.lastfileidx = argc - conf.firstfileidx + 1;
	conf.save = malloc(16 * sizeof(unsigned char));
	reset_string(conf.save);
	conf.wildcardwritten = 0;
	return (conf);
}

int	main(int argc, char **argv)
{
	t_config	conf;
	int			index;

	index = 0;
	conf = argparser(argc, argv);
	if (conf.readfromstdin)
		ft_hexdump_stdin(&conf, &index);
	else
		ft_hexdump(&conf);
	return (0);
}
