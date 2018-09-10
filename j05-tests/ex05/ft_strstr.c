/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/05 16:08:29 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    
    i = 0;
    if (to_find[i] == '\0')
      return (str);
    while (str[i++] != '\0')
    {
      j = 0;
      if (str[i] == to_find[j])
      {
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
        {
          j++;
          if (to_find[j] == '\0')
            return (&str[i]);
        }
      }
    }
    return (0);
}

int main(int ac, char **av)
{
    printf("%s\n", strstr(av[1], av[2]));
    printf("%s", ft_strstr(av[1], av[2]));
}