/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:12:33 by axelcoezard       #+#    #+#             */
/*   Updated: 2021/11/12 00:29:32 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_string	string_create(char *value)
{
	t_string	dest;

	dest.value = ft_strdup(value);
	dest.size = ft_strlen(dest.value);
	return (dest);
}
