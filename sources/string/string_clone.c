/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_clone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:17:07 by axelcoezard       #+#    #+#             */
/*   Updated: 2021/11/12 00:19:46 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_string	string_clone(const t_string src)
{
	t_string dest;

	dest.value = ft_strdup(src.value);
	dest.size = ft_strlen(dest.value);
	return (dest);
}
