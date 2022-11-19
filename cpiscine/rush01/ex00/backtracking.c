/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:55:23 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:55:26 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_solve(int **tab, int index)
{
	int	value;

	if (index == 16 && is_valid_array(tab))
	{
		return (1);
	}
	if (index < 16)
	{
		value = 1;
		while (value < 5)
		{
			if (is_valid_value(tab, index, value))
			{
				tab[index / 4 + 1][index % 4 + 1] = value;
				if (ft_solve(tab, index + 1))
					return (1);
			}
			value++;
		}
	}
	return (0);
}
