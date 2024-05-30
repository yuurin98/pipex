/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:10:08 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/25 15:23:39 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	slen;
	size_t	sublen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	sublen = len;
	if (start + len > slen)
		sublen = slen - start;
	substring = (char *)malloc(sizeof(char) * sublen + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, sublen + 1);
	return (substring);
}

/*
#include <stdio.h>

int	main(void)
{
	char const *s = "1234567890";
	printf("%s\n", ft_substr(s, '2', 3));

	return (0);
}
*/