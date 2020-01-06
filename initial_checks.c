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
DEFINE 0 false
DEFINE 1 true

int otherchar(char *arg)
{
    int i;

    i = 0
    while (arg[i] != '\0')
    {
        if (arg[i] < '0' && arg[i] > '9' && isspace(arg[i]) == false)
            return (true);
        i++;
    }
    return (false);
}

int samenum(char *arg)
{
    int check
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
                    return(0);
                i++;
            }
            check++;
            i = check + 1;
        }
    }
}

int initialchecks(char *arg)
{
    if (otherchar(arg) == true)
        return (false);
}
