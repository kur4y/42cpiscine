/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:28:23 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:28:26 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ptr;

	ptr = begin_list;
	if (!ptr)
		return (NULL);
	while (ptr->next)
	{
		if (cmp(ptr->data, data_ref) == 0)
			return (ptr);
		ptr = ptr->next;
	}
	if (cmp(ptr->data, data_ref) == 0)
		return (ptr);
	return (NULL);
}
