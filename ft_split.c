/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:54:38 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/07 18:04:21 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
			i++;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count += 1;
			while (s[i] == c)
				i++;
			if (s[i] == '\0')
				count -= 1;
			continue ;
		}
		i++;
	}
	return (count + 1);
}

char	string_split(char *s, int start, char *split, int len)
{
	split = malloc(len + 1);
	split = ft_strlcpy(split, &s[start], len);
	return (split);
}

// colocar as palavras dentro do split
char	*put_split(char *s, char c, char *split)
{
	int		i;
	int		index;
	int		start;
	int		len;

	i = -1;
	index = -1;
	while (split[++i])
	{
		while (s[++index])
		{
			if (s[index] != c)
			{
				start = index;
				len = 0;
				while (s[index + len] != c)
					len++;
			}
			if (len > 0)
				string_split(s, start, &split[i], len);
		}
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;

	words = count_words(s, c);
	split = malloc(words * sizeof(char *) + 1);
	return (put_split(s, c, split));
}

int main(void)
{
	ft_split("  gabriela      de   sa     ", ' ');
}

/*

s = string para ser split
c = caracter para ser delimitado

final de array contendo null

*/