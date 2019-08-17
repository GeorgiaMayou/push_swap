/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:19:40 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/06 13:49:33 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;
	char	*new;
	size_t	i;

	i = 0;
	begin = 0;
	end = ft_strlen(s);
	new = ft_strnew(end + 1);
	while (ft_isspace(s[begin]) == 1)
		begin++;
	while (ft_isspace(s[end - 1]) == 1)
		end--;
	while (begin < end)
		new[i++] = s[begin++];
	return (new);
}
