/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:20:12 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/24 13:44:40 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[slen] != '\0')
		slen++;
	return (slen);
}

/*
#include <string.h>
#include <stdio.h>

int main() 
{
	char dest[0xff];
	const char *src = "   dtyjtyhj";
	size_t result = ft_strlcpy(dest, src, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu\n", result);

	char	dest2[0xff];
	const char	*src2 = "   dtyjtyhj";
	size_t result2 = strlcpy(dest2, src2, sizeof(dest2));
	printf("%s\n", dest2);
	printf("%zu\n", result2);

	return 0;
}
*/