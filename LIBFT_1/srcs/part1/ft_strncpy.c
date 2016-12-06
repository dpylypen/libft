/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:36:55 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/25 14:28:18 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t l;

	l = 0;
	while (l < len && src[l])
	{
		dst[l] = src[l];
		l++;
	}
	while (l < len)
	{
		dst[l] = '\0';
		l++;
	}
	return (dst);
}

