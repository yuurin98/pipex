/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:02 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/24 13:49:02 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_dest = (char *) dst;
	char_src = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	char	name[256];
	int		age;
	double	average;
}	Student;

int	main(void)
{
	char	src[] = "motherfucker";
	char	dest[100] = "weds";

	char	*dest_ptr = memcpy(dest, src, strlen(src) + 1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	printf("dest_ptr: %p\n", dest_ptr);
	printf("	dest: %p\n", dest);

	double	src_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double	dest_array[5];
	
	ft_memcpy(dest_array, src_array, sizeof(src_array));

	for (int i = 0; i < 5; i++)
		printf("dest_array[%d] = %f\n", i, dest_array[i]);

	Student student1;
	strcpy(student1.name, "Rin");
	student1.age = 20;
	student1.average = 26.7;

	Student	student2;

	ft_memcpy(&student2, &student1, sizeof(Student));

	printf("Name: %s\n", student2.name);
	printf("Age: %d\n", student2.age);
	printf("Average: %f\n", student2.average);

	return (0);
}
*/