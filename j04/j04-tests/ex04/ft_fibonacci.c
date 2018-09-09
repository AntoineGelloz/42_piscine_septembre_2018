/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:36:26 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/03 14:36:29 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index <= 1)
        return (index);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    printf("%d", ft_fibonacci(3));
}