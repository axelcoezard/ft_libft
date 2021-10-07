/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:11:14 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/07 13:15:04 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && src[i])
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (src[i])
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
