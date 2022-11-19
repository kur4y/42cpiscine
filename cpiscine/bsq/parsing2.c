/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:48:30 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:48:32 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_map_ok(char *str_map, t_map *map)
{
	int	i;
	int	char_count;
	int	line_count;

	i = 0;
	line_count = 0;
	while (str_map[i] != '\n')
		i++;
	i++;
	while (str_map[i])
	{
		char_count = 0;
		while (str_map[i] != '\n')
		{
			if (str_map[i] != map->obs && str_map[i] != map->vide)
				return (0);
			char_count++;
			i++;
		}
		if (char_count != map->length)
			return (0);
		line_count++;
		i++;
	}
	return (line_count);
}

char	*process_file_stdin(int fd)
{
	char	buffer[1024];
	int		length;
	char	*content;

	content = malloc(sizeof(char) * 1);
	if (!content)
		return (NULL);
	content[0] = 0;
	length = 1;
	while (length > 0)
	{
		length = read(fd, buffer, 1024);
		if (length > 0)
			content = ft_strncat_malloc(content, buffer, length);
	}
	return (content);
}

char	*process_file(int fd, int fileSize)
{
	int		length;
	char	*content;
	int		offset;

	offset = 0;
	content = malloc(sizeof(char) * (fileSize + 1));
	if (!content)
		return (NULL);
	length = 1;
	while (length > 0)
	{
		length = read(fd, content + offset, 1024);
		offset += length;
	}
	*(content + offset) = 0;
	return (content);
}
