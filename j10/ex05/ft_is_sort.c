/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/19 14:39:45 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int trie_croissant;
	int trie_decroissant;

	i = 0;
	trie_croissant = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			trie_croissant = -1;
		i++;
	}
	i = 0;
	trie_decroissant = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			trie_decroissant = -1;
		i++;
	}
	if (trie_croissant == 1 || trie_decroissant == 1)
		return (1);
	return (0);
}