/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:53:56 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/23 17:34:38 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_display_decimal(va_list params, t_flags flags)
{
	size_t	size;
	int		decimal;

	(void) flags;
	size = 0;
	decimal = (int) va_arg(params, int);
	ft_putnbr_fd(decimal, 1);
	if (decimal == 0)
		return (1);
	if (decimal < 0)
		size++;
	while (decimal != 0)
	{
		decimal /= 10;
		size++;
	}
	return (size);
}
