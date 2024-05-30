/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:23:42 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/23 15:01:25 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;
	size_t				j;

	str1 = s1;
	str2 = s2;
	i = 0;
	j = 0;
	while (i < n && j < n)
	{
		if (str1[i] != str2[j])
			return (str1[i] - str2[j]);
		i++;
		j++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = "NULL";
	char *str2 = "NULLL";
	printf("%d\n", memcmp(str1, str2, 5));
	printf("%d\n", ft_memcmp(str1, str2, 5));

	return (0);
}
*/