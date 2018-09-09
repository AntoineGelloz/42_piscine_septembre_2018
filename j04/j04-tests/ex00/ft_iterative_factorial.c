/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:44:17 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/02 20:17:44 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	if (nb < 0 || nb > 12)
		return (0);
	fact = 1;
	i = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(11));
}