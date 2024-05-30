/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:08:25 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/06 16:09:55 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long long n)
{
	char	*s;

	s = "0123456789abcdef";
	if (n >= 16)
		ft_puthexlower(n / 16);
	ft_putchar(s[n % 16]);
	return (0);
}

int	ft_printp(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex(ptr);
	return (count);
}