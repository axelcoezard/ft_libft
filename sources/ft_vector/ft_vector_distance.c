/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_distance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:43:37 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 17:39:38 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_vector_distance(t_vector *a, t_vector *b)
{
	int	xx;
	int	yy;
	int	zz;

	if (a == NULL || b == NULL)
		return (0);
	xx = b->x - a->x;
	yy = b->y - a->y;
	zz = b->z - a->z;
	return (ft_sqrt(ft_pow(xx, 2) + ft_pow(yy, 2) + ft_pow(zz, 2)));
}
