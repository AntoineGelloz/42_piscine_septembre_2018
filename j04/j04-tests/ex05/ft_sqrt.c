/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:49:04 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/03 14:49:07 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
        return (0);
    while (i * i <= nb && i < 46341)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%d", ft_sqrt(2336272225));
}


















/*
    int smallCandidate;
    int largeCandidate;

    if (nb < 0)
        return 0;
    else if (nb < 2)
        return nb;
    else
        smallCandidate = ft_sqrt(nb / 4) * 2;
        largeCandidate = smallCandidate + 1;
        if (largeCandidate * largeCandidate == nb)
            return (smallCandidate);
        else
            return (largeCandidate);
*/