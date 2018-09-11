/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:56:03 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/05 14:56:09 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	if (*dest != '\0')
		*dest = '\0';
	return (dest);
}

int main(int ac, char **av)
{
    (void)ac;
    strcpy(av[1], av[2]);
    printf("%s, %s\n", av[1], av[2]);
    ft_strcpy(av[3], av[4]);
    printf("%s, %s\n", av[3], av[4]);
    return 0;
}