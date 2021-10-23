/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:54:07 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/23 18:05:32 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COMPLEX_H
# define FT_COMPLEX_H

struct s_complex
{
	double	a;
	double	b;
};
typedef struct s_complex	t_complex;

t_complex	ft_complex_create(double a, double b);
t_complex	ft_complex_add(t_complex x, t_complex y);
t_complex	ft_complex_sub(t_complex x, t_complex y);
t_complex	ft_complex_mul(t_complex x, t_complex y);
t_complex	ft_complex_scale(t_complex x, double y);

double		*ft_complex_real(t_complex x);
double		*ft_complex_imag(t_complex x);

#endif
