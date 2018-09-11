/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sipatry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:20:05 by sipatry           #+#    #+#             */
/*   Updated: 2018/09/09 22:26:02 by sipatry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	oops(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "Error";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		check_char_grille(char **tab)
{
	int	i;
	int j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.' && (tab[i][j] < '1' || tab[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_grille_size(char **tab, int i)
{
	int x;
	int y;

	y = 0;
	x = 1;
	if (i != 10)
		return (0);
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
			y++;
		if (y != 9)
			return (0);
		x++;
	}
	return (1);
}

int		check_start(char **tab, int i)
{
	int nb;

	nb = 0;
	nb += check_grille_size(tab, i);
	nb += check_char_grille(tab);
	if (nb != 2)
	{
		oops();
		return (0);
	}
	if (i == 0)
	{
		oops();
		return (0);
	}
	else
		return (1);
}
