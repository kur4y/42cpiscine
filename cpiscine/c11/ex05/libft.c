/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:53:02 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:00:16 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putnbr(int nb)
{
	char	t[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb)
	{
		t[i++] = ('0' + nb % 10);
		nb = nb / 10;
	}
	while (i)
		ft_putchar(t[--i]);
}
