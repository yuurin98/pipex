/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:15:19 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/10/30 14:21:02 by lchee-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*main_node;
	t_list	*current_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	main_node = ft_lstnew(f(lst->content));
	if (main_node == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		current_node = ft_lstnew(f(lst->content));
		if (current_node == NULL)
		{
			ft_lstclear(&main_node, del);
			return (NULL);
		}
		ft_lstadd_back(&main_node, current_node);
		lst = lst->next;
	}
	return (main_node);
}
