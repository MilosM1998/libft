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

	i = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	if (dst_len == size)
		return (dst_len + size);
	while (src[i] != '\0' && dst_len + 1 < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + size);
}
/*#include <stdio.h>
int main()
{
	char dst[20] = "Hello";
	char *src = "world";
	printf("%s, length:%zu", dst, ft_strlcat(dst, src, 5));
}*/
