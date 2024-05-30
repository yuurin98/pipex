/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:40:06 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/30 11:55:54 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	nlen = ft_strlen(needle);
	i = 0;
	if ((haystack == NULL || needle == NULL) && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (ft_strlen(haystack) < nlen)
		return (NULL);
	while (i <= len - nlen)
	{
		if (ft_strncmp(haystack + i, needle, nlen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
#include <xlocale.h>

int	main(void)
{
	char *s1 = "I think I have an illness.";
	char *s2 = "a";

	printf("%s\n", strnstr(s1, s2, 22));
	printf("%s\n", ft_strnstr(s1, s2, 22));

	return(0);
}
*/