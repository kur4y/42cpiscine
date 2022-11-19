/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:45:06 by tanota            #+#    #+#             */
/*   Updated: 2022/11/17 16:45:10 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], fd);
}

void	ft_strncopy(unsigned char *dst, unsigned char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

int	ft_strncmp(unsigned char *s1, unsigned char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < 16)
	{
		i++;
	}
	if (i == 16)
		return (0);
	return (s1[i] - s2[i]);
}
