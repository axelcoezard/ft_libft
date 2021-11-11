/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:31:13 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 23:32:18 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_add_front(t_list *list, void *content)
{
	t_node	*node;

	if (list != NULL)
	{
		node = list_create_node(content);
		node->next = list->first;
		list->first = node;
		list->size++;
	}
}
