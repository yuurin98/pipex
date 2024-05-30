/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:37:46 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/30 13:02:37 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*memory;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size != 0 && count > UINT_MAX / size)
		return (NULL);
	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	memory = malloc(total);
	if (memory == NULL)
		return (NULL);
	if (memory)
		ft_memset(memory, 0, total);
	return (memory);
}

/*
#include <stdio.h>

int main() 
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *arr = (int *)ft_calloc(num_elements, element_size);
    if (arr) 
	{
        for (size_t i = 0; i < num_elements; i++) 
		{
            printf("%d ", arr[i]); // Should print all zeros
        }
        free(arr);
    }

    return 0;
}
*/