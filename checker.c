/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:31:58 by gmayou            #+#    #+#             */
/*   Updated: 2019/08/17 14:32:00 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
DEFINE 0 false
DEFINE 1 true

int initialchecks(char *arg);

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc < 2)
        return (0);
    while (argv[i])
    {
        if (initialchecks(argv[i]) == false)
            return(0);
        i++;
    }
    return(0);
}
    
