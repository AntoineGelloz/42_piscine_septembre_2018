/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:08:23 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/10 09:12:16 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*dest != '\0' && *src != '\0')
		*dest++ = *src++;
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	char *dest_temp;

	dest_temp = dest;
	while (*dest_temp != '\0')
		dest_temp++;
	ft_strcpy(dest_temp, src);
	return (dest);
}
