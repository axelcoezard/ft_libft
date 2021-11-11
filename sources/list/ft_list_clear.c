/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:54:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 22:44:43 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_clear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			tmp = current->next;
			ft_list_remove(current, del);
			current = tmp;
		}
		*lst = NULL;
	}
}
