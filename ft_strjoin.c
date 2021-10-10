/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:32:28 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/10 12:37:25 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s3;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = (char *) malloc(s1_len + s2_len + 1);
	if (!s3)
		return (NULL);
	ft_strcpy(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
}
