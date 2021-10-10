/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:42:55 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/10 18:17:09 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_size(int n)
{
	long	nbr;
	int		size;

	size = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa_fill(char *s, int start, int end, int nbr)
{
	while (end > start)
	{
		s[end - 1] = (nbr % 10) + '0';
		nbr /= 10;
		end--;
	}	
	return (s);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*s;
	int		size;
	int		sign;

	size = ft_itoa_size(n);
	s = (char *) ft_calloc(size + 1, 1);
	if (!s)
		return (NULL);
	nbr = n;
	sign = 0;
	if (size == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
		sign = 1;
	}
	s = ft_itoa_fill(s, sign, size, nbr);
	s[size + 1] = 0;
	return (s);
}
