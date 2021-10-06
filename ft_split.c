/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:22:47 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/06 17:52:01 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_split_sep(char c, char sep)
{
	return (c == sep || c == '\0');
}

int	ft_split_size(const char *s, char c)
{
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_split_sep(s[i], c) && ft_split_sep(s[i + 1], c))
		{
			size++;
		}
		i++;
	}
	return (size);
}

char	*ft_split_copy(const char *s, int start, int size)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		word[i] = s[start + i];
		i++;
	}
	word[size + 1] = 0;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		size;
	int		i;
	int		j;
	int		k;

	size = ft_split_size(s, c);
	words = (char **) malloc(sizeof(char *) * (size + 1));
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (!ft_split_sep(s[i + j], c))
				j++;
			words[k] = ft_split_copy(s, i, j);
			k++;
			i += j;
		}
	}
	words[size] = NULL;
	return (words);
}
