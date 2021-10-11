/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:08:52 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/11 14:35:00 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	res;

	if (!dest || !src)
		return (0);
	res = 0;
	if (size > 0)
	{
		while (size > 1 && src[res])
		{
			dest[res] = src[res];
			res++;
			size--;
		}
		dest[res] = 0;
	}
	while (src[res] != 0)
	{
		res++;
	}
	return (res);
}
