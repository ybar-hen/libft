/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 02:00:11 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:39:33 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int x;

	x = ft_in_str(ft_strccut(s1, n), s2);
	if (x < 0 || *s2 == '\0')
		return (NULL);
	return ((char *)s1 + x);
}
