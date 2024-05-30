/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:45:29 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 15:36:47 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	buffer[10];
	ft_bzero(buffer, sizeof(buffer));

	for (unsigned long i = 0; i < sizeof(buffer); i++)
	{
		printf("%d ", buffer[i]);
	}
	printf("\n");

	bzero(buffer, sizeof(buffer));
	for (unsigned long j = 0; j < sizeof(buffer); j++)
	{
		printf("%d ", buffer[j]);
	}
	printf("\n");

	return (0);
}
*/
