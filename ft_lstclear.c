/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:41:27 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/21 23:15:09 by mmilicev         ###   ########.fr       */
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
/* void    delete_node(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list  *test;

	test = malloc(sizeof(char) * 27);
	ft_lstadd_front(&test, ft_lstnew("Hello World!"));
	ft_lstadd_back(&test, ft_lstnew("This is!"));
	ft_lstadd_back(&test, ft_lstnew("a test"));
	while(test)
	{
		printf("%s\n", (char *)test->content);
		test = test->next;
	}
	ft_lstclear(&test, delete_node);
	if(!test)
		printf("%s\n", "memory cleared");
} */
