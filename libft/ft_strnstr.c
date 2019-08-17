/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:13:52 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/29 13:15:06 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		in;
	char		*ptr;

	in = 0;
	ptr = (char *)haystack;
	if (!*needle)
		return (ptr);
	while (*ptr && len)
	{
		while ((needle[in] == *(ptr + in)) && len)
		{
			if (needle[in + 1] == '\0')
				return (ptr);
			in++;
			len--;
		}
		in = 0;
		ptr++;
		len--;
	}
	return (0);
}
