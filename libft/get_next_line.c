/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:21 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/09/29 15:11:46 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"
#include "include/libft.h"
#include <stdio.h>

char	*get_line(int fd, char *line)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_stringchar(line, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		line = ft_stringjoin(line, buffer);
		if (!line)
		{
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	return (line);
}

char	*until_endline(char *line)
{	
	char	*trimmed;
	int		i;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	trimmed = ft_substring(line, 0, i + (line[i] == '\n'));
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

char	*new_line(char	*line)
{
	char	*find_newline;
	char	*new_start;

	find_newline = ft_stringchar(line, '\n');
	if (find_newline == NULL)
	{
		free(line);
		return (NULL);
	}
	new_start = ft_substring(find_newline + 1, 0, ft_stringlength(find_newline + 1));
	free(line);
	if (!new_start)
		return (NULL);
	return (new_start);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*current_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &current_line, 0) < 0)
		return (NULL);
	line = get_line(fd, line);
	if (!line)
		return (NULL);
	current_line = until_endline(line);
	line = new_line(line);
	return (current_line);
}

/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("map.ber", O_RDONLY);
	if (fd < 0)
	{
		write(2, "Error: Could not open file\n", 28);
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
*/