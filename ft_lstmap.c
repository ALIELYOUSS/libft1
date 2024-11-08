/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:19 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/06 17:48:55 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_node = NULL;
	while (lst)
	{
		f(lst->content);
		if (!f(lst->content))
			del(f(lst->content));
		else
		{
			new_list = ft_lstnew("0");
			ft_lstadd_back(&lst, new_list);
			lst = lst->next;
			if (!new_list)
				free(new_list);
		}
		lst = lst->next;
	}
	free(lst);
	return (new_list);
}
// int miain()
// {
// 	t_list list = ft_lstmap();
// }