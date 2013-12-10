/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 23:05:07 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:24:20 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (len <= 0)
		return (b);

	*((char *)b + len - 1) = (unsigned char)c;

	if (len == 1)
		return (b);
	return (ft_memset(b, c, len - 1));
}
