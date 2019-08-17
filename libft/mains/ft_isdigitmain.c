/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitmain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:55:44 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/21 10:59:20 by gmayou           ###   ########.fr       */
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
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	printf("%d%d ", ans, ansft);

	c = 'a';
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	printf("%d%d ", ans, ansft);

	c = '5';
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	printf("%d%d ", ans, ansft);

	c = ',';
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	printf("%d%d ", ans, ansft);

	c = '0';
	ansft = ft_isdigit(c);
	ans = isdigit(c);
	printf("%d%d ", ans, ansft);

	return (0);
}
