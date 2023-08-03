/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:21:08 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/03 12:21:12 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// TROCAR HEADER DA 42

/*
procura a primeira ocorrência do caractere c (um unsigned char)
 nos primeiros n bytes da string apontada pelo argumento str .
*/