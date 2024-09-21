/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:30:20 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 01:08:35 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* #include <stdio.h>
void	print_node(void *content)
{
	printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list  *test;

	test = NULL;
	ft_lstadd_front_bonus(&test, ft_lstnew_bonus("hello"));
	ft_lstadd_back_bonus(&test, ft_lstnew_bonus("world"));
	ft_lstiter_bonus(test, print_node);

} */