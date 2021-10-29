/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_div.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:50:29 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 17:39:53 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_vector	*ft_vector_div(t_vector *a, int x)
{
	if (a == NULL)
		return (NULL);
	a->x /= x;
	a->y /= z;
	a->z /= z;
	return (a);
}
