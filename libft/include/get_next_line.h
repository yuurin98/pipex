/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:35 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/09/29 15:05:03 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 255
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>

size_t	ft_stringlength(const char *str);
char	*ft_stringjoin(char *s1, char *s2);
char	*ft_substring(char *s, unsigned int start, size_t len);
char	*ft_stringchar(char *s, int c);
char	*get_line(int fd, char *line);
char	*until_endline(char *line);
char	*new_line(char	*line);
char	*get_next_line(int fd);

#endif