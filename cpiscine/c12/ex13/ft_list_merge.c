/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:29:10 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:29:12 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*ptr;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	ptr = *begin_list1;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = begin_list2;
}
