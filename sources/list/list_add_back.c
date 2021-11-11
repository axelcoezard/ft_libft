/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:43:24 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 23:33:53 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_add_back(t_list *list, void *content)
{
	t_node	*node;

	if (list != NULL)
	{
		node = list_create_node(content);
		node->prev = list->last;
		list->last = node;
		list->size++;
	}
}
