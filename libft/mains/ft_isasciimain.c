/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isasciimain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:23:52 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/21 14:16:25 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c;
	int ans;
	int ansft;

	c = 'A';
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = 'a';
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = '5';
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = 177;
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = 0177;
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = ' ';
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	c = '\n';
	ansft = ft_isascii(c);
	ans = isascii(c);
	printf("%d%d ", ans, ansft);

	return (0);
}
