/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
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

int  ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] > 32 && str[i] < 127)
        return (0);
    i++;
  }
  return (1);
}

int main(int ac, char **av)
{
  (void)ac;
  (void)av;
  printf("%d", ft_str_is_printable("\n\t"));
}