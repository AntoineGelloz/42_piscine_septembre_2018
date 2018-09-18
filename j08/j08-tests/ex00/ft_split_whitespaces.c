/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 23:15:16 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/17 14:08:31 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define SEPARATIONS	(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')

int		ft_nb_words(char *str, int i)
{
	int nb_words;

	nb_words = 0;
	while (str[i] != '\0')
	{
		while ((str[i] != '\0') && SEPARATIONS)
			i++;
		if ((str[i] != '\0') && !SEPARATIONS)
			nb_words += 1;
		while ((str[i] != '\0') && !SEPARATIONS)
			i++;
	}
	return (nb_words);
}

int		ft_nb_characters(char *str, int i)
{
	int nb_characters;

	nb_characters = 0;
	while ((str[i] != '\0') && SEPARATIONS)
		i++;
	if (str[i] == '\0')
		return (nb_characters);
	while ((str[i] != '\0') && !SEPARATIONS)
	{
		nb_characters += 1;
		i++;
	}
	return (nb_characters);
}

char	**ft_fill_in(char *str, int *i, int nb_characters, char **tab)
{
	int j;
	int word;

	word = 0;
	while (tab[word][0] != 0)
		word++;
	j = 0;
	while (j < nb_characters)
	{
		tab[word][j] = str[*i];
		*i += 1;
		j++;
	}
	tab[word][j] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		word;
	int		nb_characters;
	int		nb_words;

	i = 0;
	nb_words = ft_nb_words(str, i);
	if (((tab = (char**)malloc(sizeof(char*) * (nb_words + 1))) == NULL))
		return (0);
	word = 0;
	while (word < nb_words)
	{
		while ((str[i] != '\0') && SEPARATIONS)
			i++;
		if (str[i] == '\0')
			return (tab);
		nb_characters = ft_nb_characters(str, i);
		if ((tab[word] = (char *)malloc(sizeof(char) * nb_characters)) == NULL)
			return (0);
		tab = ft_fill_in(str, &i, nb_characters, tab);
		word += 1;
	}
	tab[word] = 0;
	return (tab);
}
