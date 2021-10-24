/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:39:57 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/24 16:00:31 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft.h"

#define FT_E	2.71828182845904523536028747135266250
#define FT_PI	3.14159265358979323846264338327950288

double	ft_ceil(double x);
double	ft_floor(double x);
double	ft_round(double x);

double	ft_min(double x, double y);
double	ft_max(double x, double y);
double	ft_abs(double x);

double	ft_sqrt(double x);

double	ft_pow(double x, double power);
double	ft_exp(double power);
double	ft_log(double exp);

double	ft_cos(double x);
double	ft_sin(double x);
double	ft_tan(double x);

double	ft_acos(double cos);
double	ft_asin(double sin);
double	ft_atan(double tan);

#endif
