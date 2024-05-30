/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:00:59 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/26 20:06:52 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	char	**substrings;
	char	*start;

	if (s == NULL)
		return (NULL);
	i = -1;
	count = ft_wordcount(s, c);
	substrings = (char **)malloc(sizeof(char *) * (count + 1));
	if (substrings == NULL)
		return (NULL);
	while (++i < count)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s != c && *s != '\0')
			s++;
		substrings[i] = ft_substr(start, 0, s - start);
	}
	substrings[i] = NULL;
	return (substrings);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "What in the actual fuck.";
	char	**split = ft_split(str, ' ');
	int		count = ft_wordcount(str, ' ');
	
	printf("%d\n", count);
	for(int i = 0; i < count; i++)
	{
		if (ft_strlen(split[i]) > 0)
			printf("%s\n", split[i]);
		free(split[i]);
	}
	free(split);
	return (0);
}
*/