/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/19 17:47:04 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_retour;

	i = 0;
	if (!(tab_retour = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab_retour[i] = f(tab[i]);
		i++;
	}
	return (tab_retour);
}
