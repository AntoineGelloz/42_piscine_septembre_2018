/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:37:57 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/19 14:33:02 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
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

int		ft_atoi(char *str)
{
	int pos;
	int integer;
	int sign;

	pos = 0;
	integer = 0;
	sign = 1;
	while (str[pos] < 33 && str[pos] != '-' && str[pos] != '+')
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] != '\0' && str[pos] >= '0' && str[pos] <= '9')
	{
		integer = integer * 10 + str[pos] - 48;
		pos++;
	}
	return (sign * integer);
}
