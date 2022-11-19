/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:20:50 by tanota            #+#    #+#             */
/*   Updated: 2022/11/09 14:40:48 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
