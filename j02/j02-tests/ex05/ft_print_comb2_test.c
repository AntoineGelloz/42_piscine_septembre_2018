/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:49:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/08/31 11:03:50 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	display(int nombre)
{
	int first;
	int second;

	if (nombre < 10)
	{
		first = 48;
		second = nombre + 48;
	}
	else
	{
		first = nombre / 10 + 48;
		second = nombre % 10 + 48;
	}
	ft_putchar(first);
	ft_putchar(second);
}

int	main(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			display(a);
			ft_putchar(' ');
			display(b);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
