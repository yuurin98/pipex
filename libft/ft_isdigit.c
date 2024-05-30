/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:46:11 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 11:15:31 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	d;
	int	e;
	int	f;

	c = 2;
	d = 'a';
	e = 48;
	f = '7';

	printf("C = %d\n", ft_isdigit(c));
	printf("D = %d\n", ft_isdigit(d));
	printf("E = %d\n", ft_isdigit(e));
	printf("F = %d\n", ft_isdigit(f));
	printf("C = %d\n", isdigit(c));
	printf("D = %d\n", isdigit(d));
	printf("E = %d\n", isdigit(e));
	printf("F = %d\n", isdigit(f));

	return (0);
}
*/
