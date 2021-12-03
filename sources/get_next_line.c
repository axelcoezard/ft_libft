/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:10:20 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/03 16:22:33 by acoezard         ###   ########.fr       */
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
		line = ft_strjoin(line, byte);
	}
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

int	main(void)
{
	char *line;
	int fd;

	fd = open("../Makefile", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
		ft_putstr_fd(line, 1);
	close(fd);
}
