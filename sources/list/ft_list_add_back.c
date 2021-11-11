/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:43:24 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 22:44:23 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_add_back(t_list **alst, void *content)
{
	t_list	*last;
	t_list	*new;

	if (alst != NULL)
	{
		new = ft_list_create(content);
		if (*alst == NULL)
			*alst = new;
		else
		{
			last = ft_list_last(*alst);
			last->next = new;
		}
	}
}
