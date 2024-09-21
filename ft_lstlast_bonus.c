/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:16:44 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:19:43 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*first;
	t_list	*last;

	first = NULL;
	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("Hello"));
	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("World!"));
	ft_lstadd_front_bonus(&first, ft_lstnew_bonus("This is a test"));
	last = ft_lstlast_bonus(first);
	printf("%s", (char *)last->content);
} */
