/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:30:09 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/10 19:30:50 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*n_dest;
	char	*n_src;
	size_t	i;

	n_dest = (char *) dest;
	n_src = (char *) src;
	i = 0;
	while (i < n && n_src[i] != c)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (dest);
}
