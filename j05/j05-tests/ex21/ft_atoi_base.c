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

int     ft_atoi(char *str)
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

int     ft_check_str(char *str, char *base, int base_length)
{
    int i;
    int j;
    int ok;

    i = 0;
    ok = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] != '\0')
    {
        j = 0;
        while (j < base_length)
        {
            if (str[i] == base[j])
                ok++;
            j++;
        }
        i++;
    }
    printf("ok%d-i%d\n", ok, i);
    if (ok == i - 1)
        return (1);
    else
        return (0);
}

int    ft_atoi_base(char *str, char *base)
{
    int base_length;
    int j;
    int result;

    base_length = 0;
    result = 0;
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
    if (base_length > 1 && ft_check_str(str, base, base_length) == 1)
    {

    }
    return (result);
}

int     main(void)
{
    char str[20] = "-16BC";
	char base[20] = "0123456789ABCDEF";
	printf("result %d\n", ft_atoi_base(str, base));
}