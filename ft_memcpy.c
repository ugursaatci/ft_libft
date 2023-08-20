/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:13:15 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:13:15 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	if (!dest && !src)
		return (0);
	csrc = (char *)src;
	cdest = (char *)dest;
	while (n)
	{
	*(cdest++) = *(csrc++);
	n--;
	}
	return (dest);
}
