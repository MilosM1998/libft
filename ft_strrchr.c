/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:32:47 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/03 16:56:56 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const	char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (s[i] == c || s[i] != s[0])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char *str;
	char *ptr;
	str = "tesing";
	ptr = ft_strrchr(str, 'a');
	printf("%s", ptr);
}*/
