/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowermain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:14:56 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/23 10:28:46 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a;
	char A;
	char Aft;

	a = 'a';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = 'A';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = 'm';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = 'M';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = 'z';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = 'Z';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = '!';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = '\n';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = ' ';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	a = '%';
	Aft = ft_tolower(a);
	A = tolower(a);
	printf("%c%c ", A, Aft);

	return (0);
}
