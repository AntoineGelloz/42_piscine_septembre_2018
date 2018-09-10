/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
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

char    ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
    i++;
  return (s1[i] - s2[i]);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("%d\n", strncmp(av[1], av[2], atoi(av[3])));
  printf("%d", ft_strncmp(av[1], av[2], atoi(av[3])));
}