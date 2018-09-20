/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/18 11:38:56 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        if (nb <= -10)
            ft_putnbr(nb / -10);
        ft_putchar(-(nb % 10) + '0');
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
    else
        ft_putchar(nb + '0');
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    void   (*f)(int);
    int length;
    int i;
    int *tab;
    
    i = 0;
    length = ac - 1;
    if (!(tab = (int *)malloc(sizeof(int) * length)))
        return (0);
    while (i < length)
    {
        tab[i] = atoi(av[i + 1]);
        i++;
    }
    f = &ft_putnbr;
    ft_foreach(tab, length, &ft_putnbr);
}