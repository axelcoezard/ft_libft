/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:10:20 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/02 19:39:04 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*get_next_line(int fd)
{
	char	*line;
	char	byte[2];
	int 	reader;

	line = ft_strdup("");
	while (*byte != '\n' && reader != 0)
	{
		reader = read(fd, byte, 1);
		byte[1] = 0;
		ft_putchar_fd(byte[0], 1);
		line = ft_strjoin(line, byte);
	}
	return (line);
}

int	main(void)
{
	char *line;
	int fd;

	fd = open("ft_strjoin.c", O_RDONLY);
	line = get_next_line(fd);
	line = get_next_line(fd);
}
