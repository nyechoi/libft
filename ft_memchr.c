/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nye-eun- <nye-eun-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:38:10 by nye-eun-          #+#    #+#             */
/*   Updated: 2022/09/26 20:19:20 by nye-eun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}

	return (NULL);
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	s--;
	i = -1;
	while (++i < n)
		if (*(unsigned char *)++s == (unsigned char)c)
			return ((unsigned char *)s);
	return (NULL);
}
