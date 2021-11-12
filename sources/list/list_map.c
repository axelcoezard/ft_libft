/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:13:55 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 18:45:02 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*list_map(t_list *list, void *(*callback)(void *), void (*del)(void *))
{
	t_node	*current;
	t_list	*nlist;

	if (list == NULL || callback == NULL || del == NULL)
		return (NULL);
	nlist = list_create();
	current = list->first;
	while (current != NULL)
	{
		list_add_back(nlist, callback(current->content));
		current = current->next;
	}
	return (nlist);
}
