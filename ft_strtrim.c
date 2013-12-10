/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 01:05:20 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:42:38 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	char *rpce;
	size_t len, lenc;

	lenc = ft_nbchar(s, ' ') + ft_nbchar(s, '\n') + ft_nbchar(s, '\t');
	len  = ft_strlen(s) - lenc;
	str  = ft_strnew(len);
	if (!str)
		return (NULL);

	rpce = str;
	while (*s != '\0')
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
		{
			*str = *s;
			str++;
		}
		s++;
	}
	return (rpce);
}
