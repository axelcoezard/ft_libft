/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:36:16 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 17:42:14 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_vector	*ft_vector_sub(t_vector *a, t_vector *b)
{
	if (a == NULL || b == NULL)
		return (NULL);
	a->x -= b->x;
	a->y -= b->y;
	a->z -= b->z;
	return (a);
}
