#include <stdio.h>
#include "libft.h"

void	print_lst(t_list **lst);
void	free_content(void *content);

int	main (void)

{
	t_list	*lst;
	t_list	*node;

	lst = NULL;
	node = ft_lstnew("node");
	if (node == NULL)
		return (0);
	ft_lstadd_back(&lst, node);
	node = ft_lstnew("add back 1");
	if (node == NULL)
		return (0);
	ft_lstadd_back(&lst, node);

	node = ft_lstnew("add back 2");
	if (node == NULL)
		return (0);
	ft_lstadd_back(&lst, node);
	print_lst(&lst);
	ft_lstclear(&lst, &free_content);
	return (0);
}

void	print_lst(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		printf("%s\n",(char *)  tmp->content);
		tmp = tmp->next;
	}
}

void	free_content(void *content)
{
	free(content);
}
