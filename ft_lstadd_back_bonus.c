/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:00:04 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:25:48 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast_bonus(*lst);
		last->next = new;
	}
}
/* #include <stdio.h>
int	main(void)
{
	t_list	*first;
    t_list  *current;

	first = ft_lstnew_bonus("Hello");
	first->next = ft_lstnew_bonus("World!");
	ft_lstadd_back_bonus(&first, ft_lstnew_bonus("Test"));
	ft_lstadd_back_bonus(&first, ft_lstnew_bonus("Last"));
    ft_lstadd_front_bonus(&first, ft_lstnew_bonus("First"));
    current = first;
	while(current)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
} */
