/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:39:27 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/21 13:15:33 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
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

	lst = ft_lstnew("Hello");
	lst->next = ft_lstnew("World!");
	size = ft_lstsize(lst);
	printf("%d", size);
} */