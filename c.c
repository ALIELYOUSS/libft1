#include "libft.h"
void	ft_del(void *str)
{
	ft_memset(str, 0, ft_strlen(str));
}
void *ft_f(void *s)
{
	char *str = (char*)s;
    str[0]++;
    return (str);	
}
int main()
{
	t_list *node = ft_lstnew(ft_strdup("a"));
	t_list *head = node;

	node = ft_lstnew(ft_strdup("b"));
	ft_lstadd_back(&head, node);

	node = ft_lstnew(ft_strdup("c"));
	ft_lstadd_back(&head, node);

	node = ft_lstnew(ft_strdup("d"));
	ft_lstadd_back(&head, node);

	node = ft_lstnew(ft_strdup("e"));
	ft_lstadd_back(&head, node);

	node = ft_lstnew(ft_strdup("f"));
	ft_lstadd_back(&head, node);

	t_list *new_list = ft_lstmap(head, ft_f, ft_del);
	while (new_list)
	{
		printf("%s\n", (char *)(new_list->content));
		new_list = new_list->next;		
	}
}