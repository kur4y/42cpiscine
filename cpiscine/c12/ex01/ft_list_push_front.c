/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:10:00 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:11:40 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*l;

	l = ft_create_elem(data);
	if (l)
	{
		if (*begin_list)
			l->next = *begin_list;
		*begin_list = l;
	}
}
