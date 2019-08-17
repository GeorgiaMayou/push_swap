/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:26:53 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/23 15:43:59 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	int i1;
	int	i2;
	int i3;
	int st1;
	int st2;
	int st3;
	
	str1 = "Hello";
	str2 = "1";
	str3 = "Y\n";
	
	i1 = ft_strlen(str1);
	i2 = ft_strlen(str2);
	i3 = ft_strlen(str3);
	st1 = strlen(str1);
	st2 = strlen(str2);
	st3 = strlen(str3);

	printf("Hello: ft_strlen[%d] strlen[%d]\n", i1, st1);
	printf("1: ft_strlen[%d] strlen[%d]\n", i2, st2);
	printf("Ynewline: ft_strlen[%d] strlen[%d]\n", i3, st3);
	
	return(0);
}
