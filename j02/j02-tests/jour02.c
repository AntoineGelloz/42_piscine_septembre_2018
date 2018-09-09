/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:19:02 by agelloz           #+#    #+#             */
/*   Updated: 2018/08/29 18:08:14 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	nft_putchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	return (0);
}

int	main(void)
{
	nft_putchar('@', 42);
	ft_putchar('\n');
	return (0);
}
