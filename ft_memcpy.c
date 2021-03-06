/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 10:40:44 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:24:51 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	if (n <= 0)
		return (s1);

	*((char *)s1 + n) = *((char *)s2 + n);
	return (ft_memcpy(s1, s2, (n - 1)));
}
