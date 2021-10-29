/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_distance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:43:37 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 15:47:43 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_vector_distance(t_vector *a, t_vector *b)
{
	int	xx;
	int	yy;

	if (a == NULL || b == NULL)
		return (0);
	xx = b->x - a->x;
	yy = b->y - a->y;
	return (ft_sqrt(ft_pow(xx, 2) + ft_pow(yy, 2)));
}
