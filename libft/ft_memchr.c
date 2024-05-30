/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:01:38 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/23 14:21:57 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;
	size_t				i;

	str = s;
	chr = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", memchr("Waht in the actual fuck", 'z', 0));
	printf("%s\n", ft_memchr("Waht in the actual fuck", 'z', 0));

	return (0);
}
*/