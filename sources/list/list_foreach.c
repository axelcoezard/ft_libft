/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_foreach.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:11:52 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 23:41:50 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_foreach(t_list *list, void (*callback)(void *))
{
	t_node *node;

	if (list != NULL)
	{
		node = list->first;
		while (node != NULL)
		{
			callback(node->content);
			node = node->next;
		}
	}
}
