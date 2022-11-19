/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:26:23 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:26:27 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*ptr;

	if (!begin_list || !f)
		return ;
	ptr = begin_list;
	while (ptr->next)
	{
		f(ptr->data);
		ptr = ptr->next;
	}
	f(ptr->data);
}
