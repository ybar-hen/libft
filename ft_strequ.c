/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 22:54:41 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/08 23:11:54 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);	
	if (*s1 == '\0' && *s2 == *s1)
		return (1);
	if (*s1 == *s2)
		return (ft_strequ(s1 + 1, s2 + 1));
	return (0);
}