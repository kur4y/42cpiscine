/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:05:56 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 16:05:58 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_process_file(int fd)
{
	char	buffer[1024];
	int		length;
	char	*content;

	content = (char *)malloc(sizeof(char) * 1);
	if (!content)
		return (NULL);
	content[0] = 0;
	length = 1;
	while (length > 0)
	{
		length = read(fd, buffer, 1024);
		if (length > 0)
		{
			content = ft_strncat_malloc(content, buffer, length);
			if (!content)
				return (NULL);
		}
	}
	return (content);
}
