/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:46:33 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:46:16 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* search and return the place of the needle in the str or -1 if not finded */

int		ft_in_str(const char *str, const char *needle)
{
	char *cpy;
	char *need;

	cpy = ft_strdup(str);
	need = ft_strdup(needle);
	return ft_in_str_(cpy, need,  3);
}



/* search and return the place of the needle in the str or -1 if not finded */
/* mode 0 will search strictly, mode 1 with * on left, and 2 with * on right */
/* mode >= 3 will search the needle in the string zith anything on sides */
int		ft_in_str_(char *str, char *needle, int mode)
{	int		match;
	int		res;

	match = 0;
	res = 0;
	if (*needle == '\0' && mode > 0)
		return (1);
	while (*str != '\0' )
	{	if (*needle == *str)
		{	match = 1;
			needle++;
			if ((mode > 1 && *needle == '\0') || (mode <= 1 && *needle == '\0'
						&& *(str + 1) == '\0'))
				return (res);
			else if (*needle == '\0')
				return (-1);
		} else
		{	if (match == 1 || mode < 1)
				return (-1);
			res++;
		}
		str++;
	}
	if (match == 1 && *needle == '\0' && *str == '\0')
		return (res);
	return (-1);
}
