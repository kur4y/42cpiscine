/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:48:22 by tanota            #+#    #+#             */
/*   Updated: 2022/11/17 16:52:55 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	get_next_line(t_config *conf, unsigned char line[16], int	*currentFile,
	int *fd)
{
	unsigned char	buffer[16];
	int				readchars;

	if (*fd == 0)
		*fd = get_next_valid_file(currentFile, *conf, fd);
	if (*fd == -1)
		return (-1);
	reset_string(line);
	reset_string(buffer);
	readchars = read(*fd, buffer, 16);
	while (readchars < 16 && !is_last_file(*currentFile, *conf)
		&& readchars != -1)
	{
		close(*fd);
		*currentFile = *currentFile + 1;
		*fd = get_next_valid_file(currentFile, *conf, fd);
		if (*fd > 0)
			readchars += read(*fd, buffer + readchars, 16 - readchars);
	}
	ft_strncat(line, buffer, readchars);
	return (readchars);
}

void	flush_buffer(t_config conf, unsigned char *line, int length, int *index)
{
	if (length == -1)
		return ;
	print_line(conf, line, length, index);
	if (length != 16 && length != 0)
	{
		ft_print_address(*index, conf);
		write(1, "\n", 1);
	}
}

int	check_save(t_config *conf, unsigned char *str, int *index)
{
	if (ft_strncmp(conf->save, str) != 0)
	{
		conf->wildcardwritten = 0;
		return (1);
	}
	if (conf->wildcardwritten)
	{
		*index += 16;
		return (0);
	}
	write(1, "*\n", 2);
	conf->wildcardwritten = 1;
	*index += 16;
	return (0);
}

void	ft_hexdump(t_config *conf)
{
	unsigned char	line[16];
	int				currentfile;
	int				readamount;
	int				fd;
	int				index;

	fd = 0;
	index = 0;
	readamount = 16;
	currentfile = 0;
	reset_string(line);
	while (readamount == 16)
	{
		readamount = get_next_line(conf, line, &currentfile, &fd);
		if (readamount == 16 && check_save(conf, line, &index))
			print_line(*conf, line, readamount, &index);
		reset_string(conf->save);
		ft_strncopy(conf->save, line, readamount);
	}
	check_bad_file_descriptor(*conf);
	flush_buffer(*conf, line, readamount, &index);
}

void	check_bad_file_descriptor(t_config conf)
{
	int	i;
	int	fd;

	i = conf.firstfileidx;
	while (i < conf.lastfileidx + 1)
	{
		fd = open(conf.argv[i], O_RDONLY);
		if (fd != -1)
		{
			close(fd);
			return ;
		}
		close(fd);
		i++;
	}
	fd = open(conf.argv[i - 1], O_RDONLY);
	read(fd, "", 1);
	exception_handler(conf.argv[i - 1], conf.argv[0]);
}
