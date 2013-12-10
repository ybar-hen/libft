/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 01:30:51 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:41:49 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char *str;
	char **tab = NULL;
	int  i;

	str = ft_strnew(ft_strlen(s));
	if (ft_strlen(s) > 0 || !(str = ft_strcpy(str, s)))
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			if (*(str + 1) != c && *(str + 1) != '\0')
				i++;
			*str = '\0';
		}
		else if (tab[i] == NULL)
			tab[i] = str;
		str++;
	}
	return (tab);
}
