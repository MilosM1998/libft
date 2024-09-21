/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:39:27 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/22 00:19:08 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize_bonus(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/* #include <stdio.h>
int	main(void)
{
	t_list *lst;
	int size;

t_list	*ft_lstnew
	lst = ft_lstnew_bonus("Hello");
	lst->next = ft_lstnew_bonus("World!");
	size = ft_lstsize_bonus(lst);
	printf("%d", size);
} */