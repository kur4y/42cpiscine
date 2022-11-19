/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:28:47 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:28:50 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	my_free(t_list *ptr, void (*free_fct)(void *))
{
	if (free_fct)
		free_fct(ptr->data);
	free(ptr);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	ptr = *begin_list;
	temp = NULL;
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
		{
			if (temp)
				temp->next = ptr->next;
			else
				*begin_list = ptr->next;
			my_free(ptr, free_fct);
			if (temp)
				ptr = temp->next;
			else
				ptr = *begin_list;
		}
		else
		{
			temp = ptr;
			ptr = ptr->next;
		}
	}
}
