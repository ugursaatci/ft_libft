/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:14:20 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:14:20 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( char *str, int c)
{
	int		l;
	char	*p;

	l = ft_strlen((char *) str);
	p = str + l - 1;
	if (c == 0)
		return ((char *)str + l);
	while (l != 0)
	{
		if (*p == (char) c)
			return ((char *) p);
		p--;
		l--;
	}
	return (0);
}
