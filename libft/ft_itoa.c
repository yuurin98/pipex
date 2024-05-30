/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:08:31 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/27 15:04:40 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(int n)
{
	int	count ;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		digits;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = ft_count(n);
	i = 0;
	str = (char *)malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (digits > i)
	{
		digits--;
		str[digits] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(52465872));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));

	return (0);
}
*/