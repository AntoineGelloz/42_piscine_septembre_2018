/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:28:28 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/11 11:23:48 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb, int base_length, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb <= -1 * base_length)
			ft_putnbr(nb / (-1 * base_length), base_length, base);
		ft_putchar(base[-(nb % base_length)]);
	}
	else if (nb >= base_length)
	{
		ft_putnbr(nb / base_length, base_length, base);
		ft_putchar(base[nb % base_length]);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if ((i != j && base[i] == base[j])
					|| base[j] == '+' || base[j] == '-')
			{
				i = 0;
				return ;
			}
			j++;
		}
		i++;
	}
	if (i > 1)
		ft_putnbr(nbr, i, base);
}
