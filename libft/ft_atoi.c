/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:27:39 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/23 16:54:07 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	pn;

	result = 0;
	pn = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		pn = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * pn);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*str = "  2147483649";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	return (0);
}
*/