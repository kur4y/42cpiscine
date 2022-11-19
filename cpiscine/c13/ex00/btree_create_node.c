/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:37 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:33:40 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = malloc(sizeof(struct s_btree));
	if (!elem)
		return (NULL);
	elem->left = NULL;
	elem->right = NULL;
	elem->item = item;
	return (elem);
}
