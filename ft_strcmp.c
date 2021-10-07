/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:32:08 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/07 12:32:56 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*s1_bis;
	char	*s2_bis;

	s1_bis = (char *) s1;
	s2_bis = (char *) s2;
	while (*s1_bis && *s2_bis && *s1_bis == *s2_bis)
	{
		s1_bis++;
		s2_bis++;
	}
	return (*s1_bis - *s2_bis);
}
