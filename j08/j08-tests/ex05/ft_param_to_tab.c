/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:53:56 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/17 15:53:57 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*csrc;
	int		i;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (!(csrc = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		csrc[i] = src[i];
		i++;
	}
	if (csrc[i] != '\0')
		csrc[i] = '\0';
	return (csrc);
}

struct  s_stock_par *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *stock;
    int         i;
    int         j;

    if (!(stock = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
        return (0);
    i = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j] != '\0')
            j++;
        stock[i].size_param = j;
        stock[i].str = av[i];
        stock[i].copy = ft_strdup(av[i]);
        stock[i].tab = ft_split_whitespaces(av[i]);
        i++;
    }
    stock[i].str = 0;
    return (stock);
}