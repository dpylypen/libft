/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:21:16 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/30 14:29:23 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_put_single_nbr_fd(int nb, int fd)
{
    if (nb > 9 || nb < -9)
    {
        ft_put_single_nbr_fd((nb - (nb % 10)) / 10, fd);
        nb -= (nb - (nb % 10));
        if (nb < 0)
            nb *= -1;
    }
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd((nb * -1) + '0', fd);
    }
    else
        ft_putchar_fd((nb) + '0', fd);
}

void ft_putnbr_fd(int n, int fd)
{
    ft_put_single_nbr_fd(n, fd);
    ft_putchar_fd('\n', fd);
}