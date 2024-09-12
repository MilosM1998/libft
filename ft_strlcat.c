/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:32:03 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/05 19:52:22 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	if (size == 0)
		return (src_len);
	if (dst_len == size)
		return (dst_len + src_len);
	while (src[i] != '\0' && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char dst[20] = "Hello";
	char *src = "world";
	char s1[4] = "1234";
 	char s2[4] = "1234";
	size_t	r1;
	size_t	r2;
 	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("%zu: org\n", r1);
	printf("%zu: MY", r2);

}*/
