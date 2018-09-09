/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:49:04 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/04 21:10:54 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_upper_limit(int nb)
{
	int i;

	i = 0;
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (nb / 2);
}

int	ft_is_prime(int nb)
{
	int div;
	int upper_limit;

	if (nb < 2)
		return (0);
	upper_limit = ft_upper_limit(nb);
	div = 3;
	if (nb % 2 == 0)
		return (nb == 2);
	while (div <= upper_limit)
	{
		if (nb % div == 0)
			return (0);
		div = div + 2;
	}
	return (1);
}
