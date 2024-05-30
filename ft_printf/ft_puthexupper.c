/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:24:32 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/06 15:45:24 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int n)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexupper(n / 16);
	ft_putchar(s[n % 16]);
	return (0);
}
