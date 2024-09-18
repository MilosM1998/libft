/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <mmilicev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:49:37 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/18 19:48:20 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*source;

	temp = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest == src && n == 0)
		return (dest);
	if (source < temp)
	{
		i = n;
		while (i-- > 0)
			temp[i] = source[i];
	}
	else
	{
		ft_strlcpy(dest, src, n);
	}
	return (dest);
}
/*#include <stdio.h>
int main ()
{
  char str[20] = "test this thing";
  ft_memmove( str+5, str, 15 );
  puts( str );
  return (0);
}*/
