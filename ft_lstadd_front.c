/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:04:45 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/06 17:51:52 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst || !lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
//int main()
//{
//	char *s = "hello";
//	char *ss = "world";
//	t_list *node = ft_lstnew(s);
//	t_list *node2 = ft_lstnew(ss);
//	t_list *head = node;
//	ft_lstadd_front(&head,  node);
//	t_list *current = head;
//	while (current)
//	{
//		printf("%s\n", (char *)(current->content));
//		current = current->next;
//	}
//}