/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:31:10 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/30 12:09:13 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (c > 255)
			c -= 256;
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", strrchr("What the fuck", 0));
	printf("%s\n", ft_strrchr("What the fuck", 0));

	return 0;
}
*/