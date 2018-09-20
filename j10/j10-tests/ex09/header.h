/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:43:20 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/18 01:57:44 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

typedef struct  s_opp
{
    char        *op;
    int         (*fopp)(int, int);
}               t_opp;

void            ft_putstr(char *str);
void            ft_putchar(char c);
void            ft_putnbr(int nb);
int             ft_atoi(char *str);
int             ft_add(int v1,int v2);
int             ft_sub(int v1,int v2);
int             ft_mul(int v1,int v2);
int             ft_div(int v1,int v2);
int             ft_mod(int v1,int v2);
int             ft_usage(int v1,int v2);

#endif
