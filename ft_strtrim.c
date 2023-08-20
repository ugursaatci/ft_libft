/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:14:24 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:14:24 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_array(char s1, char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1 == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		k;
	int		j;
	char	*arr;

	i = 0;
	k = 0;
	len = ft_strlen((char *)s1);
	while (is_in_array(s1[i], (char *)set) && s1[i])
		i++;
	j = len - 1;
	while (j > i && is_in_array(s1[j], (char *)set))
		j--;
	arr = ft_substr(s1, i, j - i + 1);
	if (!arr)
		return (0);
	return (arr);
}
