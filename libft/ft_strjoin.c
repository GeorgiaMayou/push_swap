/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:52:11 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/04 16:11:25 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strnew(len);
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1)
		ft_strcpy(new, s1);
	if (s2)
		ft_strcat(new, s2);
	return (new);
}
