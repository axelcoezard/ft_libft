/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:39:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/07 15:08:49 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		dest_len;

	dest_len = ft_strlen(s) + 1;
	dest = (char *) ft_calloc(dest_len, 1);
	return (ft_strcpy(dest, s));
}
