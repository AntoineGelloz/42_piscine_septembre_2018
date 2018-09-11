/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/11 13:21:42 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*osrc;
	int		bytes_left;

	osrc = src;
	bytes_left = size;
	if (bytes_left != 0)
	{
		while (--bytes_left != 0)
		{
			*dest = *src;
			dest++;
			if (*src++ == '\0')
				break ;
		}
	}
	if (bytes_left == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src)
			src++;
	}
	return (src - osrc);
}
