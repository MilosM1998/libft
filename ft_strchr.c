/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:23:28 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/02 17:27:30 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *str;
	char *ptr;
	char *ptr2;
	char *str2 = "testingsd";
	str = "testingsd";
	ptr = ft_strchr(str, '\0');
	ptr2 = strchr(str2, '\0');
	printf("org: %p\nMy:%p\n", ptr, ptr2);
}*/
