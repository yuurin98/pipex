/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:37:47 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 11:45:26 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isprint(1));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint('#'));
	printf("%d\n", isprint(1));
	printf("%d\n", isprint(127));
	printf("%d\n", isprint(32));
	printf("%d\n", isprint('#'));

	return(0);
}
*/
