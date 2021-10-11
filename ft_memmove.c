/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:31:06 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/11 13:47:58 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*psrc;
	char	*pdest;

	if (!dest || !src)
		return (NULL);
	psrc = (char *) src;
	pdest = (char *) dest;
	if (dest > src)
	{
		while (n - 1 > 0)
		{
			pdest[n - 1] = psrc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
