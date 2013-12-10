/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:08:16 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:48:24 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_strrev return a new sting mirror of str */
char	*ft_strrev(const char *str)
{
	char *new;

	new = ft_strnew(ft_strlen(str));
	new = ft_strrev_(new);
	return (new);
}
/* swap char by char the first and the last until the middle of the string */
char	*ft_strrev_(char *str)
{
	int len = ft_strlen(str);
	int n;

	n = 0;
	while (n < (len / 2))
	{
		ft_swap((str + n), (str + len - n + 1));
		n++;
	}
	return (str);
}
