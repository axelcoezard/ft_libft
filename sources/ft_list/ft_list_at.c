/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:26:23 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 10:30:12 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_list_at(t_list	*lst, int i)
{
	t_list	*current;
	int		j;

	j = 1;
	current = lst;
	while (current != NULL)
	{
		if (i == j)
			return (current);
		current = current->next;
		j++;
	}
	return (NULL);
}
