/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:28:28 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/10 09:35:16 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int pos;
	int integer;
	int sign;

	pos = 0;
	integer = 0;
	sign = 1;
	while (str[pos] < 33 && str[pos] != '-' && str[pos] != '+')
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] != '\0' && str[pos] >= '0' && str[pos] <= '9')
	{
		integer = integer * 10 + str[pos] - 48;
		pos++;
	}
	return (sign * integer);
}

char   *ft_convert_nbr(int nbr, int base_length, char *base, char *resultat)
{
    printf("res dep -%s-\n", resultat);
    if (nbr < 0)
    {
        *resultat = '-';
        resultat++;
        if (nbr <= -1 * base_length)
            ft_convert_nbr(nbr / (-1 * base_length), base_length, base, resultat);
        printf("zero -%c-\n", base[-(nbr % base_length)]);
        *resultat = base[-(nbr % base_length)];
        resultat++;
    }
    else if (nbr >= base_length)
    {
        printf("sup -%c-\n", base[nbr % base_length]);
        ft_convert_nbr(nbr / base_length, base_length, base, resultat);
        *resultat = base[nbr % base_length];
        resultat++;
    }
    else
    {
        printf("inf -%c-\n", base[nbr]);
        *resultat = base[nbr];
        resultat++;
    }
    printf("res -%s-\n", resultat);
    //resultat = "\0";
    return (resultat);
}

int    ft_atoi_base(char *str, char *base)
{
    int base_length;
    int j;
    int nbr;
    char resultat[30];

    resultat[0] = '\0';
    nbr = ft_atoi(str);
    base_length = 0;
    while (base[base_length] != '\0')
    {
        j = 0;
        while (base[j] != '\0')
        {
            if ((base_length != j && base[base_length] == base[j]) || base[j] == '+' || base[j] == '-')
            {
                base_length = 0;
                return (0);
            }
            j++;
        }
        base_length++;
    }
    if (base_length > 1)
        ft_convert_nbr(nbr, base_length, base, resultat);
    return (ft_atoi(resultat));
}

int main(void)
{
    char str[20] = "16";
	char base[20] = "0123456789ABCDEF";
	printf("%d", ft_atoi_base(str, base));
}