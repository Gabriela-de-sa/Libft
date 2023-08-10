/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:55:22 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/10 16:36:04 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (s == 0)
		return (NULL);
	if (len >= len_s)
		len = len_s - start;
	substring = (char *) malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*
s = string
start = substring
len = len da substring

null e /0 é a mesma coisa

if (start >= length_s)
		return (ft_strdup(""));
	
	*** se start for maior que len da string significa
	que a substring vai ser somente um /0

i é a posicao do index 0 da substring

if (len >= len_s)
	len = len_s - start;

*/