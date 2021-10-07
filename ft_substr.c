/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:30:42 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/07 14:42:52 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s_bis;

	s_bis = (char *) ft_calloc(len + 1, 1);
	return (ft_strncpy(s_bis, s + start, len));
}
