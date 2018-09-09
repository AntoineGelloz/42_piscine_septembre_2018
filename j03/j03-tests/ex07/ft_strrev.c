/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 01:21:45 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 17:55:39 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (j - i != 1 && j - i != 0)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i--;
		j++;
	}
	return str;
}

int main()
{
	char string[40] = "";
	printf("%s", ft_strrev(string));
}
