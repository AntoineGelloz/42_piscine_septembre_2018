/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:44:17 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/03 22:44:45 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
