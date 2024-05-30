/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:47:33 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/23 17:53:45 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}	
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *src = NULL;
	char *dst = ft_strdup(src);
	char *dst2 = strdup(src);

	printf("%s\n", dst);
	free(dst);
	printf("%s\n", dst2);
	free(dst2);

	return (0);
}
*/