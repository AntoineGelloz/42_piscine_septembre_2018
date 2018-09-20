/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/18 11:38:56 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

int     ft_check(char **av)
{
    if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
    {
        ft_putstr("Stop : division by zero");
        return (0);
    }
    if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
    {
        ft_putstr("Stop : modulo by zero");
        return (0);
    }
    if (!(av[2][1] == '\0'))
        return (0);
    return (1);
}

int     main(int ac, char **av)
{
    int i;

    if (ac != 4)
        return (0);
    if (ft_check(av) != 1)
    {
        ft_putstr("\n");
        return (0);
    }
    i = 0;
    while (i < 5)
    {
        if (g_opptab[i].op[0] == av[2][0])
        {
            ft_putnbr(g_opptab[i].fopp(ft_atoi(av[1]), ft_atoi(av[3])));
            ft_putchar('\n');
            return (0);
        }
        i++;
    }
    g_opptab[5].fopp(0, 0);
    ft_putchar('\n');
}