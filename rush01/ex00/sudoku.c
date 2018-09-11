/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sipatry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:15:53 by sipatry           #+#    #+#             */
/*   Updated: 2018/09/09 18:45:00 by cpecheu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(char **tab);

int		check(char **tab, int nb, int pos);

int		end(char **tab, int pos)
{
	if (pos == 90)
	{
		print(tab);
		return (1);
	}
	return (0);
}

int		sudoku(char **tab, int pos, int x, int y)
{
	int nb;
	int	stop;

	x = pos / 9;
	y = pos % 9;
	nb = 0;
	stop = 0;
	if (end(tab, pos))
		return (1);
	if (tab[x][y] != '.')
		stop = sudoku(tab, pos + 1, x, y);
	else
	{
		while (nb++ < 9)
		{
			if (check(tab, nb + 48, pos))
			{
				stop = (sudoku(tab, pos + 1, x, y));
				tab[x][y] = '.';
				if (stop)
					return (stop);
			}
		}
	}
	return (stop);
}
