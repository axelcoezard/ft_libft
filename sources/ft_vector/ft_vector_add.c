/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:34:56 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 17:37:38 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_vector	*ft_vector_add(t_vector *a, t_vector *b)
{
	if (a == NULL || b == NULL)
		return (NULL);
	a->x += b->x;
	a->y += b->y;
	a->z += b->z;
	return (a);
}
