/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:55:05 by liafigli          #+#    #+#             */
/*   Updated: 2021/01/14 10:36:23 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *str, char c)
{
	int i;
	int count;
	int flag;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			flag = 1;
			if (str[i + 1] == '\0')
				count++;
		}
		else if (flag == 1 && str[i] == c)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	*word_dup(const char *str, int start, int finish)
{
	char *word;
	int i;

	i = 0;
	word = malloc((finish - start) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	int index;
	char **split;

	i = 0;
	j = 0;
	index = -1;
	if (!s || !split = malloc(count_words(s, c) + 1 * sizeof(char *)))
		return (0);
	while (i < strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == strlen(s) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
	}
	split[j] = '\0';
	return (split);
}