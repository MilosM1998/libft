/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:29:28 by mmilicev          #+#    #+#             */
/*   Updated: 2024/06/22 17:49:06 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int len;
	char *dup;

	len = ft_strlen(src);
	dup = (char *)malloc(len + 1);
	
	if(dup == NULL)
		return NULL;
	ft_strcpy(dup, src);
	return (dup);
}

#include <stdio.h>

int main()
{
	char str[] = "Testing";
	char *new = ft_strdup(str);
	if(new == NULL)
		printf("You have an mistake");
	else
		printf("%s", new);
	return (0);	
}
