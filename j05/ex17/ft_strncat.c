/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/10 09:07:17 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *move_in_dest;

	move_in_dest = dest;
	while (*move_in_dest != '\0')
		move_in_dest++;
	while (*move_in_dest != '\0' && *src != '\0' && nb > 0)
	{
		*move_in_dest++ = *src++;
		nb--;
	}
	if (*move_in_dest != '\0')
		*move_in_dest = '\0';
	return (dest);
}
