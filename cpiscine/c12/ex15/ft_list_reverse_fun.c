/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:29:57 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:30:10 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at2(t_list *begin_list, unsigned int nbr)
{
	t_list	*ptr;

	ptr = begin_list;
	while (nbr)
	{
		ptr = ptr->next;
		if (!ptr)
			return (0);
		nbr--;
	}
	return (ptr);
}

int	ft_list_size2(t_list *begin_list)
{
	int		count;
	t_list	*ptr;

	ptr = begin_list;
	count = 0;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*opposite;
	void	*temp;
	int		i;
	int		j;

	i = 0;
	while (begin_list && ft_list_size2(begin_list) - i > 1)
	{
		j = ft_list_size2(begin_list) - i;
		opposite = ft_list_at2(begin_list, j - 1);
		temp = begin_list->data;
		begin_list->data = opposite->data;
		opposite->data = temp;
		begin_list = begin_list->next;
		i++;
	}
}
