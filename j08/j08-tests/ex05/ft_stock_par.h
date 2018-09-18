/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:21:51 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/17 14:21:53 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct      s_stock_par
{
    int size_param;
    char    *str;
    char    *copy;
    char    **tab;
}                   t_stock_par;

void    ft_show_tab(struct s_stock_par *par);
struct  s_stock_par *ft_param_to_tab(int ac, char **av);
char    **ft_split_whitespaces(char *str);
void    ft_putchar(char c);

#endif