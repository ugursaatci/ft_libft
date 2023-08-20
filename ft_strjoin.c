/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:13:58 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:13:58 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*ptr;

	i = 0;
	j = 0;
	size = ft_strlen((char *)s1);
	size += ft_strlen((char *)s2);
	ptr = malloc(size + 1);
	if (!ptr)
		return (0);
	while (s1[i] != '\0')
	{
	ptr[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
