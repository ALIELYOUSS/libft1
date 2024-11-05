
// #include <limits.h>
// #include "libft.h"

// int main()
// {
// 	// int s = 100;
// 	// int i[10];
// 	// i[0] = 200;
// 	// ft_memset((void *)i, 20, 1);
// 	// printf("%d\n", s);	
// 	char *s = "hello\n";
// 	char *c = "world\n";
// 	char *b = "done"; 
// 	t_list *node2 = ft_lstnew(c);
// 	t_list *node = ft_lstnew(s);
// 	t_list *node3 = ft_lstnew(b);
// 	ft_lstadd_front(&node2, node);
// 	t_list *currnt = node2;
// 	ft_lstadd_back(&node2, node3);
// 	while (currnt)
// 	{
// 		printf("%s", currnt->content);
// 		currnt = currnt->next;
// 	}
// 	printf("\n%d", ft_lstsize(node));
// 	printf("\n%s",(char *)ft_lstlast(node)->content);
// }

#include "libft.h"
int main()
{
	char *s = ft_itoa(15225);	
	printf("%s\n", s);
}
