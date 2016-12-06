/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:54:55 by dpylypen          #+#    #+#             */
/*   Updated: 2016/12/01 16:52:41 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_put_to_str(char *str, char c)
{
    *str = c;
}

static char *ft_str_for_num(int nb)
{
    int len;
    char *str;

    len = 1;
    while (nb > 9 || nb < -9)
    {
        if (nb < 0 && len == 1)
            len++;
        if (nb > 9 || nb < -9)
		{
            nb = (nb - (nb % 10)) / 10;
			len++;
		}
    }
    str = (char *)ft_memalloc(len + 1);
    if (!str)
        return (0);
    return (str);
}

static char *ft_num_to_str(int nb, char *str)
{
    //int len;                                                                                                                                                                                                                          
    //char *str;

    //str = (char *)ft_memalloc(ft_numlen(nb) + 1);
    //len = 0;                                                                                                                                                                                                                          
    if (nb > 9 || nb < -9)
    {
        //len++;                                                                                                                                                                                                                        
        ft_num_to_str((nb - (nb % 10)) / 10, str);
        nb -= (nb - (nb % 10));
        if (nb < 0)
            nb *= -1;
    }
    if (nb < 0)
    {
        //str = ft_strnew(len + 1);                                                                                                                                                                                                     
        ft_put_to_str(ft_strchr(str, 0), '-');
        ft_put_to_str(ft_strchr(str, 0), (nb * -1) + '0');
    }
    else
    {
        //str = ft_strnew(len + 1);                                                                                                                                                                                                     
        ft_put_to_str(ft_strchr(str, 0), (nb) + '0');
    }
    return (str);
}

char *ft_itoa(int nb)
{
    char *str;
    //char *start_str;

    str = ft_str_for_num(nb);
//    start_str = str;
    if (!str)
        return (0);
    return(ft_num_to_str(nb, str));
}
