/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilicev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:39:18 by mmilicev          #+#    #+#             */
/*   Updated: 2024/09/11 22:42:25 by mmilicev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int in_word;
	int i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}		
}

static char *new_str(char const *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	if (start > end || start < 0 || end < 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static void	free_mem(char **s, int j)
{
	while (j >= 0)
	{
		free(s[j]);
		j--:
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char **split;
	int i;
	int j;
	int start;


}
