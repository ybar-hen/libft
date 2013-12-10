/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 21:02:58 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:36:36 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ldst, lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size <= ldst)
		return (size + lsrc);
	if (lsrc < (size - ldst))
	{
		ft_memcpy(dst + ldst, src, lsrc);
		dst = dst + ldst + lsrc;
	}
	else
	{
		ft_memcpy(dst + ldst, src, size - ldst - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (lsrc + ldst);
}
