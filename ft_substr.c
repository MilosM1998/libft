/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:07:51 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/07 14:53:12 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*subs;
	size_t			s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return ("");
	subs = malloc((sizeof(char) * len + 1));
	if (!subs)
		return (NULL);
	if (len > (s_len - start))
		len = s_len - start;
	while (i < len)
	{
		subs[i++] = s[start++];
	}
	subs[i] = '\0';
	return (subs);
}
/*#include <stdio.h>
int main()
{
	char *str = "This is a test.";
	char *dup = ft_substr(str, 5 , 15);
	printf("%s\n", dup);
	free(dup);
}*/
