/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:30:20 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:48:52 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst->next = lst;
	}
}
#include <stdio.h>
int main()
{
    t_list  *test;
    t_list  *temp;
    test = NULL;
    ft_lstadd_front_bonus(&test, ft_lstnew_bonus("hello"));
    ft_lstadd_back_bonus(&test, ft_lstnew_bonus("world"));
    temp = test;
    printf("Before:\n");
    while(temp)
    {   
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    ft_lstiter_bonus(test, ft_toupper((int)test->content));
    temp = test;
    while(temp)
    {
        printf("%s\n", (char *)test->content);
        test = test->next;
    }
    
}