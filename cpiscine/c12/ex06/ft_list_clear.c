/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:23:43 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:23:46 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	if (!begin_list)
		return ;
	ft_list_clear(begin_list->next, free_fct);
	if (free_fct)
		free_fct(begin_list->data);
	free(begin_list);
}
