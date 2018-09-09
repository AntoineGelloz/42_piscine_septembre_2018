/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agelloz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:46:06 by agelloz           #+#    #+#             */
/*   Updated: 2018/09/08 10:46:14 by agelloz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int match(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s2 == '*' && *s1 == '\0')
        return (match(s1, s2 + 1));
    if (*s2 == '*')
        return (match(s1 + 1, s2) + match(s1, s2 + 1));
    if (*s1 == *s2)
        return (match(s1 + 1, s2 + 1));
    return (0);
}

int main(int argc, char **argv)
{
    (void)argc;
    printf("%d", match(argv[1], argv[2]));
    return (0);
}