/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 15:05:01 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/26 21:04:13 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char  *dst, const char *src, size_t size)
{
	size_t n;
		
	if ((size - 1) <= ft_strlen(dst))
		return (size + ft_strlen(src));
	else 
	{
		n =  (size - 1) - ft_strlen(dst);
		if (n > ft_strlen(src))
			ft_strcat(dst, src);
		else
		ft_strncat(dst, src, n);
	}
		
	return (((size - 1) - n) + ft_strlen(src));
}

