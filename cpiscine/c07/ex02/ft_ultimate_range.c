/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:04 by tanota            #+#    #+#             */
/*   Updated: 2022/11/09 14:41:07 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (-1);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}	
	*range = tab;
	return (i);
}
