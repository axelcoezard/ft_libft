/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:58:46 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/23 18:08:37 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

struct s_vector
{
	double	x;
	double	y;
};
typedef struct s_vector	t_vector;

t_vector	ft_vector_create(double x, double y);
t_vector	ft_vector_add(t_vector a, t_vector b);
t_vector	ft_vector_sub(t_vector a, t_vector b);
t_vector	ft_vector_dot(t_vector a, t_vector b);
t_vector	ft_vector_mul(t_vector a, double x);

double		ft_vector_size(t_vector a);

#endif
