/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:06:55 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/29 17:36:32 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_vector
{
	int	x;
	int	y;
	int	z;
};
typedef struct s_vector	t_vector;

t_vector	*ft_vector_init(int x, int y, int z);
t_vector	*ft_vector_add(t_vector *a, t_vector *b);
t_vector	*ft_vector_sub(t_vector *a, t_vector *b);
t_vector	*ft_vector_mul(t_vector *a, int x);
t_vector	*ft_vector_div(t_vector *a, int x);
t_vector	*ft_vector_mod(t_vector *a, int x);
int			ft_vector_dot(t_vector	*a, t_vector *b);
int			ft_vector_distance(t_vector *a, t_vector *b);
int			ft_vector_free(t_vector *a);
