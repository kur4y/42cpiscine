/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:08:19 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 16:08:21 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_create_elem(int nb_len, int word_len)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->number = malloc((nb_len + 1) * sizeof(char));
	if (!list->number)
		return (NULL);
	list->word = malloc((word_len + 1) * sizeof(char));
	if (!list->word)
		return (NULL);
	list->size = nb_len;
	list->next = NULL;
	return (list);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*ptr;

	ptr = begin_list;
	if (!ptr)
		return (begin_list);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

void	ft_list_push_back(t_list **begin_list, t_list *list_to_push)
{
	t_list	*ptr;

	if (!(*begin_list))
		*begin_list = list_to_push;
	else
	{
		ptr = ft_list_last(*begin_list);
		ptr->next = list_to_push;
	}
}
