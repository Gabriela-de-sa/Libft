/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:54:38 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/09 21:49:09 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	if (*s == '\0')
		return (count);
	if (c == '\0')
		return (1);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
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

void	*clear_memory(char *morsels)
{
	while (*morsels)
		free(morsels);
	return (NULL);
}

char	*string_split(char const *s, int start, int len)
{
	char			*current_word;
	int				index;

	current_word = malloc((len + 1) * sizeof(char));
	if (current_word == NULL)
		return (clear_memory(current_word));
	index = -1;
	while (index < len)
		current_word[++index] = s[start++];
	current_word[index] = '\0';
	return (current_word);
}

char	**put_word(char const *s, char c, char **split)
{
	int		i;
	int		start;
	int		len;
	int		split_index;

	i = -1;
	split_index = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			start = i;
			len = 0;
			i = i - 1;
			while (s[++i] && s[i] != c)
				len++;
			split[++split_index] = string_split(s, start, len);
		}
	}
	split[split_index + 1] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;

	words = count_words(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	put_word(s, c, split);
	return (split);
}

/*#include <stdio.h>

void	print_palavras(char **words)
{
	if (!words)
	{
		return ;
	}
	while (*words != NULL)
	{
		printf("Palavra: %s\n", *words);
		words++;
	}
	printf("\n");
}

int	main(void)
{
	char **words;
	char *s1 = "   gabriela   de    sa    ";
	words = ft_split(s1, ' ');
	print_palavras(words);

	return (0);
}*/
