/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:53:34 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/03 11:53:43 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
    else
        return (1);
}

int main(void)
{
    printf("%d", ft_recursive_power(-3, 0));
}