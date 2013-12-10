/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 22:47:05 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/08 22:54:09 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	int   i;

	if (!s || !f)
		return (NULL);

	new = ft_strnew(ft_strlen(s));
	i = 0;
	while (*(s + i) != '\0')
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	return (new);
}
