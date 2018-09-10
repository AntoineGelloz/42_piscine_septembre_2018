/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/10 09:12:47 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*pdest;
	char	*psrc;
	int		bytes_left;
	int		dest_len;

	pdest = dest;
	psrc = src;
	bytes_left = size;
	while (bytes_left-- != 0 && *dest != '\0')
		dest++;
	dest_len = dest - pdest;
	bytes_left = size - dest_len;
	if (bytes_left-- == 0)
		return (dest_len + strlen(src));
	while (*src != '\0')
	{
		if (bytes_left != 0)
		{
			*dest++ = *src;
			bytes_left--;
		}
		src++;
	}
	*dest = '\0';
	return (dest_len + (src - psrc));
}
