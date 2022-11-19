/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:29:37 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:29:40 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr;
	void	*temp;

	ptr = *begin_list;
	if (!ptr)
		return ;
	while (ptr->next)
	{
		if (cmp(ptr->data, ptr->next->data) > 0)
		{
			temp = ptr->data;
			ptr->data = ptr->next->data;
			ptr->next->data = temp;
			ptr = *begin_list;
		}
		else
			ptr = ptr->next;
	}
}
