/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:33:41 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 18:41:56 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew_bonus(f(lst->content));
		if (!new_node)
		{
			ft_lstclear_bonus(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

void	*change_node(void *content)
{
	char	*old_str;
	char	*new;
	size_t	i;

	i = 0;
	old_str = (char *)content;
	new = malloc(sizeof(char) * ft_strlen(content) + 1);
	if (!new)
		return (NULL);
	while (old_str[i])
	{
		new[i] = old_str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* void	del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *old;
	t_list *new;
	t_list *curr;

	old = NULL;
	ft_lstadd_back_bonus(&old, ft_lstnew_bonus("Hello"));
	ft_lstadd_back_bonus(&old, ft_lstnew_bonus("World"));
	printf("old:\n");
	curr = old;
	while (curr)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
	new = ft_lstmap_bonus(old, change_node, del);
	printf("New:\n");
	curr = new;
	while (curr)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
} */