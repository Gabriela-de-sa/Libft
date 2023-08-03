/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 03:11:48 by gabriela          #+#    #+#             */
/*   Updated: 2023/08/02 17:03:05 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			len_src;
	size_t			len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (len_src);
	if (size > len_dst)
		len_dst += len_src;
	else
		len_dst = len_src + size;
	return (len_dst);
}

/*#include <stdio.h>

int	main(void)
{
	const char	src[20] = "ba  ";
	char	dest[20] = "gabri              ";

	printf("%li", strlcat(dest, src, 8));
}*/

/*
se nao houver espaco suficiente no buffer para o size ir no dest
a string é truncada

em dest tem que ser terminada em '\0'

valor retornado é o comprimento total das strings de origem e destino

a string de dest tem que ter o tamanho suficiente para receber o size

*/