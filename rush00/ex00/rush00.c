/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:07:48 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 12:03:44 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_body(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i < y - 1)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 || j == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		ft_print_line(x);
		ft_print_body(x, y);
		if (y > 1)
			ft_print_line(x);
	}
}
