/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:46:42 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/29 20:58:04 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_single_nbr(int nb)
{
	if (nb > 9 || nb < -9)
    {
		ft_put_single_nbr((nb - (nb % 10)) / 10);
		nb -= (nb - (nb % 10));
		if (nb < 0)
			nb *= -1; 
    }
	if (nb < 0)
    {
		ft_putchar('-');
		ft_putchar((nb * -1) + '0');
    }
	else
		ft_putchar((nb) + '0');
}

void	ft_putnbr(int n)
{
	ft_put_single_nbr(n);
	ft_putchar('\n'); 
}
