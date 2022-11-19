/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:35:27 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:35:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) > 0)
		btree_insert_data(&(*root)->right, item, cmpf);
	else
		btree_insert_data(&(*root)->left, item, cmpf);
}
