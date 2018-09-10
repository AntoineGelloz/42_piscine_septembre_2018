/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
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

char  *ft_strncat(char *dest, char *src, int nb)
{
	char *move_in_dest = dest;
	while (*move_in_dest != '\0')
		move_in_dest++;
	while (((*move_in_dest = *src++) != '\0') && nb > 0)
	{
		move_in_dest++;
		nb--;
	}
	if (*move_in_dest != '\0')
		*move_in_dest = '\0';
	return (dest);
}

int main(void)
{
	char str1[20] = " odjyjyj \nffff";
	char str2[20] = ";;;";
	printf(".%s.\n", strncat(str1, str2, 2));
	char str3[20] = " odjyjyj \nffff";
	char str4[20] = ";;;";
	printf(".%s.\n", ft_strncat(str3, str4, 2));
}