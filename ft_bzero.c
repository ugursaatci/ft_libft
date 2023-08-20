/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:11:46 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:11:46 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = s;
	while (i < n)
	c[i++] = 0;
}
