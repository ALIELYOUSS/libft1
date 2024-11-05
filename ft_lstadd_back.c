/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:25:13 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 22:27:15 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	last_node->next = new;
	new->next = NULL;
}
int main()
{
	t_list *node;
	t_list *new_node;
	
	node->content = "hello";
	ft_lstnew(node);
	ft_lstnew(new_node);
	ft_lstadd_back(&node, new_node);
	int i = 0;
	t_list *current = node;
	while (i < 2)
	{
		printf("%s\n", (char *)(node->content));
		current = current->next;
		i++;
	}
		return 0;
}