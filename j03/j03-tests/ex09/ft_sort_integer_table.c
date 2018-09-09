/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:59:08 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 17:07:26 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
}

int		main(void)
{
	int tableau[13] = {34643, 90, 8, 900, 989, -9088, 8008, -66, 742, 0, -1, 6654, 4};
	ft_sort_integer_table(tableau, 13);
}
