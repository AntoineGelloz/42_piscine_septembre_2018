/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
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

int    ft_putnbr(int nb)
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
    return (1);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_retour;

	i = 0;
	if (!(tab_retour = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab_retour[i] = f(tab[i]);
		i++;
	}
	return (tab_retour);
}

int     main(int ac, char **av)
{
    int (*f)(int);
    int length;
    int i;
    int *tab;
    int *tab_retour;
    
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
    if (!(tab_retour = (int *)malloc(sizeof(int) * length)))
        return (0);
    i = 0;
    tab_retour = ft_map(tab, length, &ft_putnbr);
    while (i < length)
    {
        ft_putchar('\n');
        f(tab[i]);
        i++;
    }
}