/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:19 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/09 02:14:44 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			del(new_node->content);
			return (NULL);
		}
		if (!new)
		{
			new = new_node;
			lst = lst->next; 
			continue ;
		}
		ft_lstadd_back(&new, new_node);
		lst = lst->next;
	}
	return (new);
}


