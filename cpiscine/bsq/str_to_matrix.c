/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:48:48 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:48:50 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	**str_to_matrix(char *str, char obst, char empty)
{
	int		trimm_offset;
	int		**int_matrix;
	char	chrs[2];

	chrs[0] = obst;
	chrs[1] = empty;
	trimm_offset = 0;
	while (str[trimm_offset] && str[trimm_offset] != '\n')
		trimm_offset++;
	int_matrix = ft_split_number(str + trimm_offset, "\n", chrs);
	if (!int_matrix)
		return (NULL);
	return (int_matrix);
}
