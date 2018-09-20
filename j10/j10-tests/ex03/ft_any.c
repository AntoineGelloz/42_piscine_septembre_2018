/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
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
    while (abc[i] != '\0')
    {
        if (str[i] != abc[i])
            return (0);
        i++;
    }
    return (1);
}

int     ft_any(char **tab, int(*f)(char *))
{
    int i;

    i = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}

int     main(int ac, char **av)
{
    (void)ac;
    int (*f)(char *);

    f = &ft_is_abc;
    printf("|%d|\n", ft_any(av, f));
}