/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:51:00 by gabriela          #+#    #+#             */
/*   Updated: 2023/08/05 14:14:50 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == 0 && s2 == 0)
		return (ft_strdup(""));
	new_string = (char *) malloc(len_s1 + len_s2 + 1);
	if (new_string == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_string[i] = s1[i];
	i = -1;
	while (s2[++i])
		new_string[i + len_s1] = s2[i];
	new_string[i + len_s1] = '\0';
	return (new_string);
}
