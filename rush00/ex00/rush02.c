/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:13:33 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 12:08:05 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, int line)
{
	int i;

	i = 0;
	while (i < x)
	{
		if ((line == 1 && (i == 0 || i == x - 1)))
			ft_putchar('A');
		else if ((line > 1 && (i == 0 || i == x - 1)))
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	ft_print(int x, int y)
{
	int i;
	int j;

	i = 1;
	ft_print_line(x, i);
	while (i < y - 1)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	if (y > 1)
		ft_print_line(x, i);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	else
		ft_print(x, y);
}
