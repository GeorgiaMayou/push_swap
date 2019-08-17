/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:32:51 by gmayou            #+#    #+#             */
/*   Updated: 2019/08/17 14:35:08 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000

# include "libft.h"
# include <fcntl.h>

typedef struct		s_gets
{
	char		*leftover;
	int			fd;
}					t_gets;

int					get_next_line(const int fd, char **line);

#endif
