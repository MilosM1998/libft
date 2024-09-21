/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:36:59 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:21:15 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
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
	t_list *current;

	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("Hello"));
	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("World"));
	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("First"));
	current = first;
	while(current)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
} */
