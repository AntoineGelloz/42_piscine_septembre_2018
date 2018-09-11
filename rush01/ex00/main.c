/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sipatry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:04:17 by sipatry           #+#    #+#             */
/*   Updated: 2018/09/09 22:33:51 by sipatry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sudoku(char **tab, int pos, int x, int y);

int		check_start(char **tab, int i);

int		main(int argc, char **argv)
{
	int nb;

	nb = 0;
	if (check_start(argv, argc))
		nb = (sudoku(argv, 9, 1, 0));
	if (nb == 0)
		check_start(argv, nb);
	return (0);
}
