/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:18:04 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/19 14:01:57 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*#include <stdio.h>
<<<<<<< HEAD:ft_lstnew.c
int main()
{
	t_list	*test;
	char *str = "Hello World!";
	test = ft_lstadd(str);
	printf("%s\n", test->content);
}*/
=======
int	main()
{
	t_list *test;

	char *str = "Hello";

	test = ft_lstadd(str);
	printf("%s\n", (char *)test->content);
}*/
>>>>>>> 04c79ad57bca172a903892147eb4e23cf4250e80:ft_lstadd.c
