/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:28:28 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/01 18:13:36 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long reversed_nbl;	
	int remainder;

	reversed_nbl = nb;
	if (nbr < 0)
	{
		nbl = nbl * -1;
		ft_putchar(45);
	}
	else if (nbl == 0)
		ft_putchar(48);
	while (nbl != 0)
	{
		remainder = nbl % 10;
		reversed_nbl = reversed_nbl * 10 + remainder;
		nbl /= 10;
	}
	while (reversed_nbl != 0)
	{
		ft_putchar(reversed_nbl % 10 + 48);
		reversed_nbl /= 10;
	}
}

int		main(void)
{
	long nombre;

	nombre = -676574676760;
	ft_putnbr(nombre);
}
