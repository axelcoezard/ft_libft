/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:21:49 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/11 13:33:16 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*n_dest;
	char	*n_src;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	n_dest = (char *) dest;
	n_src = (char *) src;
	i = 0;
	while (i < n)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (dest);
}
