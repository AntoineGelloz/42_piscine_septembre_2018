/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:49:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/08/31 14:25:52 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	display(char d, char e, char f)
{
	if (f > '2')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(d);
	ft_putchar(e);
	ft_putchar(f);
}

int		main(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				display(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
