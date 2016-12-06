/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:34:52 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/28 16:12:59 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char	*last_c;
	size_t	n;

    last_c = (char *)s;
    n = ft_strlen(s);
    while (1)
    {
        if (last_c[n] == (unsigned char)c)
            return (last_c + n);
		if (n == 0)
			break;
        n--;
    }
    return (NULL);
}
