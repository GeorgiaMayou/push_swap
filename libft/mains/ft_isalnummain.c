/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnummain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:17:48 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/21 11:20:30 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int  c;
	int ans;
	int ansft;

	c = 'A';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = 'a';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = '5';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = ',';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = '0';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = '+';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	c = '?';
	ansft = ft_isalnum(c);
	ans = isalnum(c);
	printf("%d%d ", ans, ansft);

	return (0);
}
