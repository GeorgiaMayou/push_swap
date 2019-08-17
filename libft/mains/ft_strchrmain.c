/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:45:01 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/24 15:35:04 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
  int c = 'b';
  int n = '\0';
  	printf("%s\n", ft_strchr("bonbons", c));
	printf("%s\n", strchr("bonbons", c));

	printf("\n%s\n", ft_strchr("shobmos", c));
	printf("%s\n", strchr("shobmos", c));
	
	printf("\n%s\n", ft_strchr("fkldaspk", c));
	printf("%s\n", strchr("fkldaspk", c));

	printf("\n%s\n", ft_strchr("nnnn", n));
    printf("%s\n", strchr("nnnn", n));
	
	printf("\n%s\n", ft_strchr("hobmpbs", c));
	printf("%s\n", strchr("hobmpbs", c));
	
	printf("\n%s\n", ft_strchr("Mob", c));
	printf("%s\n", strchr("Mob", c));
	return (0);
}
