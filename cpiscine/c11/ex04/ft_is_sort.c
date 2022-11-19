/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:34:13 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 14:37:03 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int *f(int, int))
{
	int	i;
	int	croiss;
	int	decroiss;

	i = 1;
	croiss = 1;
	decroiss = 1;
	if (length <= 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			decroiss = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			croiss = 0;
		i++;
	}
	if (croiss || decroiss)
		return (1);
	return (0);
}
