/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 03:11:48 by gabriela          #+#    #+#             */
/*   Updated: 2023/08/01 22:08:51 by gabriela         ###   ########.fr       */
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
	if (len_dst < size)
		len_dst += len_src;

	while (j < size)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}


/*#include <stdio.h>

int	main(void)
{
	const char	src[20] = "banana milk";
	char	dest[20] = "gabriela de sa";

	printf("%li", strlcat(dest, src, 8));
}*/

/*
retorna o dst se for concatenada
retorna o src caso o size for 0



*/