/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/05 16:08:29 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        if ((*dest++ = *src++) == '\0')
        {
            dest[i] = '\0';
            break;
        }
        i++;
    }
    return dest;
}

int main(int ac, char **av)
{
    (void)ac;
    strncpy(av[1], av[2], atoi(av[3]));
    printf("%s, %s, %d\n", av[1], av[2], atoi(av[3]));
    ft_strncpy(av[4], av[5], atoi(av[6]));
    printf("%s, %s, %d\n", av[4], av[5], atoi(av[6]));
    return 0;
}