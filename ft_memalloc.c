/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 22:22:53 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:30:15 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	if ((mem = (char *) malloc(size * sizeof(mem))))
	{
		ft_memset(mem, 0, size);
		return (mem);
	}
	return (NULL);
}
