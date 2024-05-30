/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:29:04 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 11:14:57 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c;
	int d;
	c = 's';
	d = 42;

	printf("C = %d\n", ft_isalpha(c));
	printf("D = %d\n", ft_isalpha(d));
	printf("C = %d\n", isalpha(c));
	printf("D = %d\n", isalpha(d));

	return (0);
}
*/
