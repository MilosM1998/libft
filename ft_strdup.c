/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:36:03 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/06 21:02:11 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*#include <stdio.h>
int main()
{
	char *str = "Hello World!";
	char *dup;
	dup = ft_strdup(str);
	printf("%s", dup);
}*/
