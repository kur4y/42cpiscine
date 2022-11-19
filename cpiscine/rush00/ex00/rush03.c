/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:53:10 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:53:12 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char left, char center, char right, int x)
{
	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(center);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_putline('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		ft_putline('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
		ft_putline('A', 'B', 'C', x);
}
