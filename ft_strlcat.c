/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:23:32 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/13 21:11:10 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			len_src;
	size_t			len_dst;
	size_t			i;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (len_src);
	if (size > len_dst)
	{
		while (src[i] != '\0' && i < size - len_dst - 1)
		{
			dst[i + len_dst] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		len_dst = len_dst + len_src;
	}
	else
		len_dst = len_src + size;
	return (len_dst);
}

/*
o size é o tamanho do buffer que destino tem que ter

se size for maior que len de dst significa que eu tenho espaco no buffer
no final eu tenho que ajustar o tamanho que é len de dst e src

se size for menor que dst 

*/