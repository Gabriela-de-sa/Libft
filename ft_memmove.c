/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:48:32 by gabriela          #+#    #+#             */
/*   Updated: 2023/08/01 02:49:43 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	if (d == 0 && s == 0)
		return (NULL);
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
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

ESTOU EM DUVIDA AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

*/