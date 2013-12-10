/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 11:57:12 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/06 13:14:50 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t i;

	i = n - 1;
	if (n == 0)
		return (s1);

	if (*((char *)s2 + i) != '\0')
		*((char *)s1 + i) = *((char *)s2 + i);
	return (ft_memmove(s1, s2, i));
}
