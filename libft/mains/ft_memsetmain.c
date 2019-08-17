/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:28:48 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/24 16:30:31 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

//Let's compare c to c
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
  //Basic string to test
	char str[50] = "Testing this sh*t !\0";
	char str2[50] = "Testing this sh*t !\0";
	//replace by
	char replace = '-';
	//on X c
	int nbr = 5;
	
	//Display result
	printf("\x1b[31m-----ORIGINAL MEMSET : %c : %d-----\n\x1b[0m", replace, nbr);
	printf("\x1b[32mOriginal : %s\n\x1b[0m", str);
	printf("\x1b[32mMemset   : %s\n\x1b[0m", (char *)memset(str, replace, nbr));
	printf("\x1b[31m---------------------------------\n\x1b[0m");
	printf("\x1b[31m\n-----TEST FT_MEMSET : %c : %d------\n\x1b[0m", replace, nbr);
	printf("\x1b[32mOriginal : %s\n\x1b[0m", str2);
	printf("\x1b[32mft_memset: %s\n\x1b[0m", (char *)ft_memset(str2, replace, nbr));
	printf("\x1b[31m---------------------------------\n\x1b[0m");
	//compare elem
	//NOTE THAT NBR HAS TO BE LESS OR EQUAL TO STR SIZE OR SEGFAULT ON EACH FNC
	if (ft_strcmp(str, str2))
		printf("\x1b[32mSUCCESS GG\n\x1b[0m");
	else
		printf("\x1b[31mERROR ORIGINAL - TEST DIFFERENT\n\x1b[0m");
	return (0);	
}
