/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:36:58 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 09:40:13 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	const char		*s2;
	int				i;

	s1 = dst;
	s2 = src;
	i = 0;
	while (n--)
	{
		s1[i] = (unsigned char)s2[i];
		if (s2[i] == c)
			return ((unsigned char *)s1 + i + 1);
		i++;
	}
	return (0);
}
