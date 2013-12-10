/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 00:47:19 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:36:01 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	char *str;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!len)
		return (NULL);

	str = ft_strnew(len);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);

	return (str);
}
