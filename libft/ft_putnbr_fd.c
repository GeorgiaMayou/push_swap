/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:10:26 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/05 14:26:35 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	new;

	new = (long int)n;
	if (new < 0)
	{
		new = new * -1;
		ft_putchar_fd('-', fd);
	}
	if (new < 10)
	{
		c = new + 48;
		ft_putchar_fd(c, fd);
	}
	else if (new > 10)
	{
		c = (new % 10) + 48;
		new = new / 10;
		ft_putnbr_fd(new, fd);
		ft_putchar_fd(c, fd);
	}
}
