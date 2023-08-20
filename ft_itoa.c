/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:12:18 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:12:18 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int		i;

	i = 0;
	if (nbr < 0)
		i = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	ft_positivem(char *m, int size, int n)
{
	while (size >= 0)
	{
		m[size] = n % 10 + '0';
		n = n / 10;
		size -- ;
	}
	return (*m);
}

char	ft_negativem(char *m, int size, int n)
{
	while (size > 0 || m[size] != '-')
	{
		m[size] = n % 10 + '0';
		n = n / 10;
		size --;
	}
	return (*m);
}

char	*ft_nbrzero(void)
{
	char	*nbr;

	nbr = malloc(2);
	nbr[0] = '0';
	nbr[1] = '\0';
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*nbr;

	if (n == 0)
		return (ft_nbrzero());
	size = ft_nbrlen(n);
	nbr = malloc ((size + 1));
	if (!nbr)
		return (0);
	nbr[size--] = '\0';
	if (n < 0 && n >= -2147483648)
	{
		if (n == -2147483648)
		{
			nbr[size] = '8';
			size--;
			n = -214748364;
		}
		nbr[0] = '-';
		n = -n;
		ft_negativem(nbr, size, n);
	}
	else if (n > 0 && n <= 2147483647)
		ft_positivem(nbr, size, n);
	return (nbr);
}
