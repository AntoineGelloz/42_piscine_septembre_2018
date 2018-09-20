/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/18 11:38:56 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_cmp(int i, int j)
{
    return (i - j);
}

int     ft_is_sort(int *tab, int length, int(*f)(int, int))
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

int     main(int ac, char **av)
{
    int (*f)(int, int);
    int *tab;
    int i;

    i = 0;
    if (!(tab = (int *)malloc(sizeof(int) * ac -1)))
        return (0);
    while (i < ac - 1)
    {
        tab[i] = atoi(av[i + 1]);
        printf("ap i|%d|%d|%d|%d\n", i, tab[i], atoi(av[i + 1]), ac);
        i++;
    }
    f = &ft_cmp;
    printf("|%d|\n", ft_is_sort(tab, ac - 1, f));
}