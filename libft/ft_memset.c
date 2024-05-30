/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:04:06 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/25 16:03:27 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer[25];
	int	i = 0;

	ft_memset(buffer, 42, sizeof(char) * 25);
	while (i < 25)
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");

	i = 0;

	memset(buffer, 42, sizeof(char) * 25);
	while (i < 25)
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
