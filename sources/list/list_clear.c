/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:54:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 23:36:49 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_clear(t_list *list, void (*del)(void*))
{
	t_node	*current;
	t_node	*tmp;

	if (list != NULL && del != NULL)
	{
		current = list->first;
		while (current != NULL)
		{
			tmp = current->next;
			list_remove(current, del);
			current = tmp;
		}
		free(list);
	}
}
