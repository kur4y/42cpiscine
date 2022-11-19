/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:35:50 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:35:54 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void	*res;

	res = NULL;
	if (!root)
		return (NULL);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return (res);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	return (btree_search_item(root->right, data_ref, cmpf));
}
