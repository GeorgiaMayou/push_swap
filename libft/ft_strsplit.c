/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:48:09 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/06 16:51:44 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	io;
	size_t	i;
	size_t	it;
	size_t	wrdcnt;

	i = 0;
	io = 0;
	it = 0;
	wrdcnt = ft_wrdcnt(s, c);
	str = (char **)malloc((wrdcnt + 1) * sizeof(str));
	while (s[i] && io <= wrdcnt && wrdcnt > 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			str[io] = ft_strnew((ft_wrdlen(s, i, c)) + 1);
		while (s[i] != c && s[i])
			str[io][it++] = s[i++];
		io++;
		it = 0;
	}
	str[io] = NULL;
	return (str);
}
