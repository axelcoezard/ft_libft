/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:13:55 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/11 22:45:30 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nelement;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst != NULL)
	{
		nelement = ft_list_create(f(lst->content));
		if (!nelement)
		{
			ft_list_clear(&nlst, del);
			return (NULL);
		}
		ft_list_add_back(&nlst, nelement);
		lst = lst->next;
	}
	return (nlst);
}
