/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:46:34 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/10 17:52:33 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	sptr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sptr)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		sptr[i] = f(i, s[i]);
		i++;
	}
	sptr[i] = 0;
	return (sptr);
}
