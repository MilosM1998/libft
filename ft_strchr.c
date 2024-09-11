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
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char *str;
	char *ptr;
	str = "testing";
	ptr = ft_strchr(str, 'n');

	printf("%s", ptr);
}*/
