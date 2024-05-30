/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:24:34 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/06 15:45:12 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned int n)
{
	char	*s;

	s = "0123456789abcdef";
	if (n >= 16)
		ft_puthexlower(n / 16);
	ft_putchar(s[n % 16]);
	return (0);
}
