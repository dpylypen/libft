/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpylypen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:21:00 by dpylypen          #+#    #+#             */
/*   Updated: 2016/11/28 17:38:44 by dpylypen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_to_lower(char c)
{
	return (ft_tolower((int)c));
}

int		ft_strequ(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	if (s1 && s2)
	{
		str1 = ft_strmap(s1, &ft_to_lower);
		str2 = ft_strmap(s2, &ft_to_lower);
		if (ft_strcmp(str1, str2) == 0)
			return (1);
	}
	return (0);
}