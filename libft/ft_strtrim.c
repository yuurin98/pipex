/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:43 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/26 17:47:11 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	start;
	size_t	len;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = 0;
	len = ft_strlen(s1);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end < len && is_set(s1[len - end - 1], set))
		end++;
	if (start >= len)
		return (ft_strdup(""));
	buffer = (char *)malloc(sizeof(char) * (len - start - end) + 1);
	if (buffer == NULL)
		return (NULL);
	ft_memmove(buffer, s1 + start, len - start - end);
	buffer[len - start - end] = '\0';
	return (buffer);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "aaabbbabcdbbbaaa";
	char	*set = "ab";

	printf("%s\n", ft_strtrim(s1, set));

	return(0);
}
*/