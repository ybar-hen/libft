/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 02:06:22 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:56:23 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccut(const char *str, size_t n)
{
	char *cpy;

	cpy = ft_strdup(str);
	return (ft_strcut(cpy, n));
}


char	*ft_strcut(char *str, size_t n)
{
	*(str + n) = '\0';
	return (str);
}

