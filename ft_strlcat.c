/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:14:01 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:14:01 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i] && i < nb)
	{
		i++;
	}
	while (src[j] && i + j + 1 < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < nb)
		dest[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}
