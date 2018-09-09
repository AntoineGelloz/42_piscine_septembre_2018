/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 23:51:21 by agelloz           #+#    #+#             */
/*   Updated: 2018/08/31 15:01:32 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		ft_putchar(lettre);
		lettre++;
	}
}
