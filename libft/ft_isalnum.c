/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:08:36 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 11:15:04 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0' || c > '9') && (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = '1';
	int d = 'A';
	int e = 'h';
	int f = 5;

	printf("C = %d\n", ft_isalnum(c));
	printf("D = %d\n", ft_isalnum(d));
	printf("E = %d\n", ft_isalnum(e));
	printf("F = %d\n", ft_isalnum(f));
	printf("C = %d\n", isalnum(c));
	printf("D = %d\n", isalnum(d));
	printf("E = %d\n", isalnum(e));
	printf("F = %d\n", isalnum(f));

	return (0);
}
*/
