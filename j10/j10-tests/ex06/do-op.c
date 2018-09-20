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
    if (!(av[2][0] == '+' || av[2][0] == '-' || av[2][0] == '*'
       || av[2][0] == '/' || av[2][0] == '%') || !(av[2][1] == '\0'))
    {
        ft_putchar('0');
        return (0);
    }
    return (1);
}

int     ft_which_op(char op)
{
    if (op == '+')
        return (0);
    if (op == '-')
        return (1);
    if (op == '*')
        return (2);
    if (op == '/')
        return (3);
    if (op == '%')
        return (4);
    return (5);
}

int     main(int ac, char **av)
{
    int (*opf[5])(int, int);

    if (ac != 4)
        return (0);
    if (ft_check(av) != 1)
    {
        ft_putchar('\n');
        return (0);
    }
    opf[0] = &ft_addition;
    opf[1] = &ft_soustraction;
    opf[2] = &ft_multiplication;
    opf[3] = &ft_division;
    opf[4] = &ft_modulo;
    ft_putnbr(opf[ft_which_op(av[2][0])](ft_atoi(av[1]), ft_atoi(av[3])));
    ft_putchar('\n');
}