/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:34:57 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/04 13:41:41 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int init;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    init = nb;
    i = power;
    while (i > 1)
    {
        nb = nb * init;
        i--;
    }
    return (nb);
}

int main(void)
{
    printf("%d", ft_iterative_power(-4, 6));
}
