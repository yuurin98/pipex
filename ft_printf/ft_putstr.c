/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:01:51 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/06 15:46:11 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = -1;
	if (str == NULL)
	{
		str = "(null)";
		len = ft_strlen(str);
		while (str[++i] != '\0')
			ft_putchar(str[i]);
		return (len);
	}
	else
	{
		len = ft_strlen(str);
		while (str[++i] != '\0')
			ft_putchar(str[i]);
		return (len);
	}
}
