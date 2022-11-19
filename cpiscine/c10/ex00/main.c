/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:10:53 by tanota            #+#    #+#             */
/*   Updated: 2022/11/17 16:22:28 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *filename);

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 1)
	{
		write (2, "File name missing.\n", 19);
		return (-1);
	}
	if (ac > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open (av[1], O_RDONLY);
	if (fd < 0)
	{
		write (2, "Cannot read file.\n", 18);
		return (-1);
	}
	close (fd);
	display_file(av[1]);
}
