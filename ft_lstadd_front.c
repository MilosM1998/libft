/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:39:49 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/21 12:34:18 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/* #include <stdio.h>
int	main(void)
{

	t_list *first = NULL;
	t_list *el1 = ft_lstnew("Hello");
	t_list *el2 = ft_lstnew("World");
	t_list *el3 = ft_lstnew("First");

	ft_lstadd_front(&first, el1);
	ft_lstadd_front(&first, el2);
	ft_lstadd_front(&first, el3);
		while(first)
	{
	printf("%s -> ", (char *)first->content);
	first = first->next;
	}
} */