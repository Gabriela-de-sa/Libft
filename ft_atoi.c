/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:20:41 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/13 21:23:51 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || \
			nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
converte uma string em um numero inteiro
se o primeiro caracter da string for um (-) é feito a multiplicacao por -1
descartar todos os espacos em brancos 
caracteres que tem \ na frente
se aparecer algum desses no meio é retornado somente o numero que foi convertido

retorna 0

	-+   -- 000 "0" '- '  

https://www.geeksforgeeks.org/write-your-own-atoi/

*/
