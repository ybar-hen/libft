/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 00:05:41 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:42:05 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = ft_strnew(len);
	while (len > 0)
	{
		*(sub + len - 1) = *(s + start + len - 1);
		len--;
	}
	return (sub);
}
