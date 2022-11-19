/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:24:24 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:24:27 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
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
