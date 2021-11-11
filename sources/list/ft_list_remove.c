/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:03:44 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 22:45:37 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_remove(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
