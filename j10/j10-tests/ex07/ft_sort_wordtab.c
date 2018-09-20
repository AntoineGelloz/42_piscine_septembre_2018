/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 23:15:16 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/17 14:09:08 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int size;

	size = 0;
	while (tab[size] != '\0')
		size++;
	i = 1;
	while (i < size)
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
		{
			ft_swap(&tab[i - 1], &tab[i]);
			i = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char **tab;
	int i;

	(void)ac;
	tab = ft_split_whitespaces(av[1]);
	ft_sort_wordtab(tab);
	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}