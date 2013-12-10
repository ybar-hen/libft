/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kickchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 01:10:04 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:16:25 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_kickchr(const char *str, char c)
{
	char *new;
	char *rpce;

	new = ft_strnew(ft_strlen(str) - ft_nbchar(str, c));
	rpce = new;
	while (*str != '\0')
	{
		if (*str != c)
		{
			*new = *str;
			new++;
		}
		str++;
	}
	return (rpce);
}
