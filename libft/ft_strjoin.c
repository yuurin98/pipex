/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:27:23 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/25 16:48:44 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
		ft_memmove(str, s1, len1);
	if (s2)
		ft_memmove(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "What the fuck ";
	char *str2 = "is this shit scooby doo";

	printf("%s\n", ft_strjoin(str1, str2));

	return (0);
}
*/