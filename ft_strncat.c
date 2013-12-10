/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 08:39:33 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:37:03 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *end_s1;

	end_s1 = s1 + ft_strlen(s1);
	if (ft_strlen(s2) < n)
		ft_strcpy(end_s1, s2);
	else
	{
		ft_strncpy(end_s1, s2, n);
		*(s1 + ft_strlen(s1) + n) = '\0';
	}
	return (s1);
}
