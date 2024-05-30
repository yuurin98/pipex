/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:45:43 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 12:03:16 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <string.h>

int	main(void)
{
	printf("%zu\n", ft_strlen("Motherfcuker."));
	printf("%zu\n", strlen("Motherfcuker."));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", strlen(""));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", strlen(" "));
	printf("%zu\n", ft_strlen("  ahaha"));
	printf("%zu\n", strlen("  ahaha"));
	printf("%zu\n", ft_strlen("  ahaha   "));
	printf("%zu\n", strlen("  ahaha   "));

	return (0);
}
*/
