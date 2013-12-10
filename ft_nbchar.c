/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 01:25:10 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:14:32 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbchar(const char *str, char c)
{
	if (*str == '\0')
		return (0);
	return ((*str == c) + ft_nbchar(str + 1, c));
}