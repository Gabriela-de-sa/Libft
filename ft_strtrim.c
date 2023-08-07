/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:55:14 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/07 11:55:16 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return ((int *)1);
		set++;
	}
	return ((int *)0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == 0 || set == 0)
		return (NULL);
	while (*s1 && ft_set(*s1, set))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_set(s1[i - 1], set))
		i--;
	return (ft_substr(s1, 0, i));
}

/*
funcao set: o set é considerada a string em si
e o caracter c é a string s1
-- a funcao ira pegar caracter por caracter de s1 e verificar se 
	eles sao iguais. Se sim, retorna um e contina incrementando o 
	loop e se retornar 0 sai do loop

o segundo while é para pegar a string s1 de tras pra frente 
retorno é a substr que faz uma duplicata
parametroa: s1 por que o ponteiro parou na posicao em que o caracter c
for diferente de set
			i é o len da string que vai ser duplicata
			0 por que no primeiro while os caracteres inicias sao removidos
			da string de s1
*/
