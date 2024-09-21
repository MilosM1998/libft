/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:00:04 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/21 14:28:55 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new)
        return;
    if (*lst == NULL)
        *lst = new;
    else
    {
	*lst = ft_lstlast(*lst);
	*lst = new;
    }
}
#include <stdio.h>

int	main(void)
{
	t_list	*first;
	t_list	*last;

	first = ft_lstnew("Hello");
    first->next = ft_lstnew("World!");
	ft_lstadd_back(&first, ft_lstnew("Last"));
    last = ft_lstlast(first);
	printf("%s", (char *)last->content);
}
