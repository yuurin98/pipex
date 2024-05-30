/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:46 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/08 14:49:56 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(char specifier, va_list args)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_printp(va_arg(args, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += ft_puthexlower(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += ft_puthexupper(va_arg(args, unsigned int));
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		return_value;
	va_list	args;

	va_start(args, format);
	i = 0;
	return_value = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			return_value += ft_format(format[i], args);
		}
		else
			return_value += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}

/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d\n", printf(" %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX));
	ft_printf("%d\n", ft_printf(" %p %p\n", LONG_MIN, LONG_MAX));
	return(0);
}
*/