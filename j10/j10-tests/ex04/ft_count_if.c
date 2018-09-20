/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:38:55 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/18 11:38:56 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_is_abc(char *str)
{
    int i;
    char abc[] = "abc";

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (abc[i] != '\0')
    {
        if (str[i] != abc[i])
            return (0);
        i++;
    }
    return (1);
}

int     ft_count_if(char **tab, int(*f)(char *))
{
    int i;
    int nb;

    i = 0;
    nb = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            nb += 1;
        i++;
    }
    return (nb);
}

int     main(int ac, char **av)
{
    (void)ac;
    int (*f)(char *);

    f = &ft_is_abc;
    printf("|%d|\n", ft_count_if(av, f));
}