/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:41:27 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:10:05 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
void    delete_node(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list  *test;
    t_list *temp;
    
	test = malloc(sizeof(t_list));
	ft_lstadd_front(&test, ft_lstnew(ft_strdup("Hello World!")));
	ft_lstadd_back(&test, ft_lstnew(ft_strdup("This is!")));
	ft_lstadd_back(&test, ft_lstnew(ft_strdup("a test")));
    ft_lstadd_back(&test, ft_lstnew(ft_strdup("Last one")));
	temp = test;
    while(temp)
	{
		printf("%s\n", (char *)temp->content);
        temp = temp->next;
	}
	ft_lstclear(&test, delete_node);
	if(!test)
		printf("%s\n", "memory cleared");
}
