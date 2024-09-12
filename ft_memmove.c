/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:49:37 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/04 18:18:26 by mmilicev         ###   ########.fr       */
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
	
	if (source < temp)
	{
		i = n;
		while (i > 0)
		{
			temp[i - 1] = source[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			temp[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>
int main ()
{
  char str[20] = "test this thing";
  ft_memmove( str+5, str, 15 );
  puts( str );
  return 0;
}*/
