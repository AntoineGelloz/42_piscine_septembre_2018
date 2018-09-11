/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sipatry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:00:33 by sipatry           #+#    #+#             */
/*   Updated: 2018/09/09 18:35:37 by cpecheu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_line_column(char **tab, int nb, int pos)
{
	int x;
	int y;
	int search;

	search = 0;
	x = pos / 9;
	y = pos % 9;
	while (search <= 8)
	{
		if (tab[x][search] == nb)
			return (0);
		search++;
	}
	search = 1;
	while (search < 9)
	{
		if (tab[search][y] == nb)
			return (0);
		search++;
	}
	return (1);
}

int		check_block(char **tab, int nb, int pos, int j)
{
	int i;
	int x;
	int y;

	i = 0;
	x = pos / 9;
	y = pos % 9;
	x = (((x - 1) / 3) * 3) + 1;
	y = (y / 3) * 3;
	while (i++ < 3)
	{
		j = 0;
		while (j++ < 3)
		{
			if (tab[x][y] == nb)
				return (0);
			y++;
		}
		y = y - 3;
		x++;
	}
	return (1);
}

int		check(char **tab, int nb, int pos)
{
	int i;
	int j;
	int x;
	int y;
	int check;

	check = 0;
	x = pos / 9;
	y = pos % 9;
	i = 0;
	j = 0;
	check += check_line_column(tab, nb, pos);
	check += check_block(tab, nb, pos, j);
	if (check == 2)
	{
		tab[x][y] = nb;
		return (1);
	}
	else
		return (0);
}
