/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:11:52 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 22:45:04 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_foreach(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		f(lst->content);
		ft_list_foreach(lst->next, f);
	}
}
