/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:37:57 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 20:47:36 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_add(int v1, int v2)
{
    return v1 + v2;
}
int ft_sub(int v1, int v2)
{
    return v1 - v2;
}
int ft_mul(int v1, int v2)
{
    return v1 * v2;
}
int ft_div(int v1, int v2)
{
    return v1 / v2;
}
int ft_mod(int v1, int v2)
{
    return v1 % v2;
}
int ft_usage(int v1, int v2)
{
    (void)v1;
    (void)v2;
    ft_putstr("error : only [ - + * / % ] are accepted.");
    return (0);
}