/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:38:57 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 15:53:48 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_vector_dot(t_vector	*a, t_vector *b)
{
	if (a == NULL || b == NULL)
		return (0);
	return (a->x * b->x + a->y * b->y);
}
