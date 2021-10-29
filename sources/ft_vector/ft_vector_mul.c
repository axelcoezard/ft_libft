/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:49:28 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 15:52:15 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_vector	*ft_vector_mul(t_vector *a, int x)
{
	if (a == NULL)
		return (NULL);
	a->x *= x;
	a->y *= x;
	return (a);
}
