/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:39:49 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/21 12:23:53 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new->next = *lst;
        lst = &new;
    }
}
#include <stdio.h>
void print_list(t_list *lst)
{
    if (!lst)
        printf("lst je prazan");
    while(lst)
    {
    printf("%s -> ", (char *)lst->content);
    lst = lst->next;
    }
}
int main()
{
    
    t_list *first = NULL;
    t_list *el1 = ft_lstnew("Hello");
    t_list *el2 = ft_lstnew("World");
    ft_lstadd_front(&first, el1);
    ft_lstadd_front(&first, el2);
    print_list(first);
}