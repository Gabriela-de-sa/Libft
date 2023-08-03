/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:48:32 by gabriela          #+#    #+#             */
/*   Updated: 2023/08/02 14:42:21 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == 0 && src == 0)
		return (NULL);
	if (src <= dest)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}

/*int main(void)
{
	const char src[20] = "Memcpy vs Memmove";
	char dest[20];
	ft_memmove(dest, src, sizeof(int) * 6);

}*/

/*
retorna dest
tem um temp

usa buffer temporario para alterar valor do dest

** if (d > s) se o buffer de dest for maior que src ele vai comecar de tras pra frente
	por que vai ter espaco para escrever o tanto de caracter em dest
	como é passado o n entre [] significa que ele vai escrever exatamente no byte na pos de dest
	e sobrescreve o dest
	

se scr for maior tem comecar do inicio pq vai acabar sobrescrevendo o que está em dest e 
se acabar o buffer vai escrever o qe falta na propra src




ESTOU EM DUVIDA AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

*/