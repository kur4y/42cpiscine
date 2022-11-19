/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:27:16 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:27:19 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
	*data_ref, int (*cmp)())
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr->next)
	{
		if (cmp(ptr->data, data_ref) == 0)
			f(ptr->data);
		ptr = ptr->next;
	}
	if (cmp(ptr->data, data_ref) == 0)
		f(ptr->data);
}
