/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *osrc;
	int bytes_left;

	osrc = src;
	bytes_left = size;
	if (bytes_left != 0)
	{
		while (--bytes_left != 0)
        {
			*dest = *src;
			dest++;
			if (*src++ == '\0')
				break ;
		}
	}
	if (bytes_left == 0) 
    {
		if (size != 0)
			*dest = '\0';
		while (*src)
			src++;
	}
	return(src - osrc);
}

int main(void)
{
    char str1[20] = "*";
    char str3[20] = "*";
    char str2[20] = "Y";
    char str4[20] = "Y";
    printf("strlcpy    -%lu- -%s-\n", strlcpy(str1, str2, 2), str1);
    printf("ft_strlcpy -%u- -%s-\n", ft_strlcpy(str3, str4, 2), str3);
}