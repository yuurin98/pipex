/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:06:11 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/17 11:37:19 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int ch;
 
   for (ch = 0x7c; ch <= 0x82; ch++) 
   {
      printf("%#04x    ", ch);
      if (ft_isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }

   int chr;

   for (chr = 0x7c; chr <= 0x82; chr++) {
      printf("%#04x    ", chr);
      if (isascii(chr))
         printf("The character is %c\n", chr);
      else
         printf("Cannot be represented by an ASCII character\n");
   }

   return(0);
}
*/
