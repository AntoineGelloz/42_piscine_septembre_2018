/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
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

int             ft_strlen(char *s)
 {
     char *p = s;
     while (*p != '\0')
         p++;
     return (p - s);
 }

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *odest;
	char *osrc;
	int bytes_left;
	int dlen;

	odest = dest;
	osrc = src;
	bytes_left = size;
	while (bytes_left-- != 0 && *dest != '\0')
			dest++;
	dlen = dest - odest;
	bytes_left = size - dlen;
	if (bytes_left-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (bytes_left != 0) {
			*dest++ = *src;
			bytes_left--;
		}
		src++;
	}
	*dest = '\0';
	return(dlen + (src - osrc));
}

int main(void)
{
	char str1[40] = "bb";
	char str2[40] = "";
	printf("res -%lu- ", strlcat(str1, str2, 4));
    printf("-%s-\n", str1);
	char str3[40] = "bb";
	char str4[40] = "";
	printf("res -%u- ", ft_strlcat(str3, str4, 4));
    printf("-%s-\n", str3);
}