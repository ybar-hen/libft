/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:29:30 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:26:03 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);

	if (*(unsigned char *)s1 != *(unsigned char *)s2)
		return ((unsigned char)s1 - (unsigned char)s2);
	return (ft_memcmp(s1 + 1, s2 + 1, n - 1));
}
