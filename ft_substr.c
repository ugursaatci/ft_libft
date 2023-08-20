/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:14:27 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:14:27 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if ((int)len - (int)start > ft_strlen((char *)s) && (start == 0
			|| (int)len > ft_strlen((char *)s)))
		ptr = malloc(ft_strlen((char *)s));
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
			ptr[j++] = s[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
