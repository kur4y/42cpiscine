/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:07:58 by tanota            #+#    #+#             */
/*   Updated: 2022/11/14 23:10:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *filename)
{
	int		fd;
	int		length;
	char	buffer[256];

	length = 1;
	fd = open(filename, O_RDONLY);
	while (length > 0)
	{
		length = read (fd, buffer, 256);
		write (1, buffer, length);
	}
	close (fd);
}