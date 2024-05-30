/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:26:13 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/24 15:35:26 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	remain;

	if (dst == NULL && dstsize == 0)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	remain = dstsize - dlen;
	if (dstsize <= dlen)
		return (dstsize + slen);
	if (slen < remain)
	{
		ft_memcpy(dst + dlen, src, slen);
		dst[dlen + slen] = '\0';
	}
	else
	{
		ft_memcpy(dst + dlen, src, remain - 1);
		dst[dlen + remain - 1] = '\0';
	}
	return (dlen + slen);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *dst = "Holy mackerel Karen is here run for your lives";
	char *src = "What in the actual fuck";

	printf("%zu\n", strlcat(dst, src, sizeof(dst)));
	printf("%s\n", dst);
	
	char *dst2 = "Holy mackerel Karen is here run for your lives";
	char *src2 = "What in the actual fuck";

	printf("%zu\n", ft_strlcat(dst2, src2, sizeof(dst2)));
	printf("%s\n", dst2);

	printf("%zu\n", ft_strlen(dst));
	printf("%zu\n", ft_strlen(src));
	printf("%zu\n", sizeof(dst));

	return (0);
}
*/