/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphamain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:03:43 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/21 10:34:07 by gmayou           ###   ########.fr       */
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
	ansft = ft_isalpha(c);
	ans = isalpha(c);
	printf("%d%d ", ans, ansft);

	c = 'a';
	ansft = ft_isalpha(c);
	ans = isalpha(c);
	printf("%d%d ", ans, ansft);

	c = '5';
	ansft = ft_isalpha(c);
	ans = isalpha(c);
	printf("%d%d ", ans, ansft);

	c = ',';
	ansft = ft_isalpha(c);
	ans = isalpha(c);
	printf("%d%d ", ans, ansft);
	
	c = '0';
	ansft = ft_isalpha(c);
	ans = isalpha(c);
	printf("%d%d ", ans, ansft);
	  
	return (0);
}
