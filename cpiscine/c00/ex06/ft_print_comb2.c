/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:53:11 by tanota            #+#    #+#             */
/*   Updated: 2022/09/17 21:40:09 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar((char)(a / 10) + '0');
			ft_putchar((char)(a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(b / 10) + '0');
			ft_putchar((char)(b % 10) + '0');
			if ((a != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
