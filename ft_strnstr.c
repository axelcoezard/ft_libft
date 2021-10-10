/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:10:33 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/10 20:16:30 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*pstr;
	char	*pfind;
	size_t	i;
	size_t	j;

	pstr = (char *) str;
	pfind = (char *) to_find;
	i = 0;
	j = 0;
	while (i < len && pstr[i] && pfind[j])
	{
		if (pstr[i] == pfind[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (pfind[j] != '\0')
		return (0);
	return (pstr + (i - j));
}
