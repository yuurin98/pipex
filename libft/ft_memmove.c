/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:46:17 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/24 13:52:34 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s < d && s + len > d)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	return (d);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	source[10] = {1,2,3,4,5,6,7,8,9,10};
	int	destination[10] = {0};

	memmove(source+2, source, sizeof(int) * 8);

	printf("MEMMOVE:\n");

	for	(int i = 0; i < 10; i++)
		printf("dest[%d] = %d\n", i, destination[i]);

	for (int i = 0; i < 10; i++)
		printf("src[%d] = %d\n", i, source[i]);
	
	int	source2[10] = {1,2,3,4,5,6,7,8,9,10};
	int	destination2[10] = {0};
	
	ft_memmove(source2 + 2, source2, sizeof(int) * 8);

	printf("FT_MEMMOVE:\n");

	for	(int j = 0; j < 10; j++)
		printf("dest2[%d] = %d\n", j, destination2[j]);

	for (int j = 0; j < 10; j++)
		printf("src2[%d] = %d\n", j, source2[j]);

	return (0);
}
*/