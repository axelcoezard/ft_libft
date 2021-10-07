/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:19:31 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/07 12:33:41 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_bis;
	char	*s2_bis;

	if (n == 0)
		return (0);
	s1_bis = (char *) s1;
	s2_bis = (char *) s2;
	while (*s1_bis && *s2_bis && *s1_bis == *s2_bis && n > 1)
	{
		s1_bis++;
		s2_bis++;
		n--;
	}
	return (*s1_bis - *s2_bis);
}
