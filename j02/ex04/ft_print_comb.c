/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:18:31 by agelloz           #+#    #+#             */
/*   Updated: 2018/08/31 15:04:06 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_print_comb(void)
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
