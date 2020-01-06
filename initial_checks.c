/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_checks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:35:50 by gmayou            #+#    #+#             */
/*   Updated: 2019/08/17 14:35:53 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int otherchar(char *arg)
{
    int i;

    i = 0;
    while (arg[i] != '\0')
    {
        if (arg[i] < '0' && arg[i] > '9' && isspace(arg[i]) == 0)
            return (1);
        i++;
    }
    return (0);
}

int samenum(char *arg)
{
    int check;
    int i;
    
    check = 0;
    i = 1;
    while (arg[i] != '\0')
    {
        while (arg[check])
        {
            while (arg[i])
            {
                if (arg[check] == arg[i])
                    return(1);
                i++;
            }
            check++;
            i = check + 1;
        }
    }
    return (0);
}

int initialchecks(char *arg)
{
    if (otherchar(arg) == 1 || samenum(arg) == 1)
        return (0);
}
