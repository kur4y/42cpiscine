/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:22:29 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:22:33 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*first;
	int		i;

	i = 0;
	if (size == 0 || !*strs)
		return (NULL);
	first = NULL;
	while (size > i)
	{
		list = ft_create_elem(strs[i]);
		if (!list)
			return (first);
		list->next = first;
		first = list;
		i++;
	}
	return (first);
}
