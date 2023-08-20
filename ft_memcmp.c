/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:13:11 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:13:11 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int l)
{
	unsigned int	i;
	unsigned char	*as1;
	unsigned char	*as2;

	as1 = (unsigned char *)s1;
	as2 = (unsigned char *)s2;
	i = 0;
	while (i < l && *(as1 + i) == *(as2 + i))
		i++;
	if (i == l)
		return (0);
	return (*(as1 + i) - *(as2 + i));
}
