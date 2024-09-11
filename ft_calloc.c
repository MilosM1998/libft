/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:47:30 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/05 21:19:06 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	i;
	size_t	total;

	i = 0;
	total = nmemb * size;
	res = malloc(total);
	if (res == NULL)
		return (NULL);
	while (i < total)
	{
		((unsigned char *)res)[i] = 0;
		i++;
	}
	return ((unsigned char *)res);
}
