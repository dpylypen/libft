/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:15:09 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/28 17:16:07 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  len;
    char    *str;

    if (s && f)
    {
        len = ft_strlen(s);
        str = ft_strnew(len);
        if (str)
            while (len--)
                str[len] = f(len, s[len]);
        return (str);
    }
    return (0);
}
