/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 22:47:05 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/08 22:52:52 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	int   i;

	if (!s || !f)
		return (NULL);

	new = ft_strnew(ft_strlen(s));
	i = 0;
	while (*(s + i) != '\0')
	{
		*(new + i) = f(*(s + i));
		i++;
	}
	return (new);
}
