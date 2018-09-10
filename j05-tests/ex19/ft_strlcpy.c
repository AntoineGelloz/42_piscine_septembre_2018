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

/*
 * Copy string src to buffer dst of size dsize.  At most dsize-1
 * chars will be copied.  Always NUL terminates (unless dsize == 0).
 * Returns strlen(src); if retval >= dsize, truncation occurred.
 */

unsigned int  ft_strlcpy(char *dest, char *src, unsigned int size)
{
    char *psrc;
    int bytes_left;

    psrc = src;
    bytes_left = size;
    if (bytes_left > 0)
    {
        while (--bytes_left > 0)
        {
            if (*dest != '\0' || *src != '\0')
            {
                *dest = *src;
                dest++;
                src++;
            }
            else
                break;
        }
    }
	if (bytes_left == 0)    /* Not enough room in dst, add NUL and traverse rest of src. */
    {
		if (size != 0)
			*dest = '\0';	/* NUL-terminate dst */
		while (*src++);
	}
    printf("%s.%s.", src, psrc);
	return(src - psrc - 1); /* count does not include NUL */
}

int main(void)
{
    char str1[20] = "";
    char str2[20] = "";
    printf(".%s.%lu\n", str1, strlcpy(str1, str2, 7));
    char str3[20] = "";
    char str4[20] = "";
    printf(".%s.%u\n", str3, ft_strlcpy(str3, str4, 7));
}