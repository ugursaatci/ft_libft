/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:13:06 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:13:06 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*p;
	char	*charfind;

	p = (char *) s;
	charfind = 0;
	while ((s != 0) && n--)
	{
		if (*p == (char) c)
		{
			charfind = p;
			break ;
		}
		p++;
	}
	return (charfind);
}
