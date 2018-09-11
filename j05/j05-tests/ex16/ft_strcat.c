/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
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

char    *ft_strcpy(char *dest, char *src)
{
    while ((*dest++ = *src++) != '\0');
    return dest;
}

char  *ft_strcat(char *dest, char *src)
{
     char *dest_temp = dest;
     while (*dest_temp != '\0')
         dest_temp++;
     ft_strcpy(dest_temp, src);
     return dest;
}

int main(void)
{
  char src1[35] = "oddtyjtujtuy";
  char dest1[40] = "peyjtyj;'twrwe";
  printf(".%s.\n", strcat(dest1, src1));
  char src2[35] = "oddtyjtujtuy";
  char dest2[40] = "peyjtyj;'twrwe";
  printf(".%s.", ft_strcat(dest2, src2));
}