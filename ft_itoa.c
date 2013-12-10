/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 02:26:11 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:28:01 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int  x;
	char *rpce;

	rpce = ft_strnew(ft_intlen(n));
	if (n < 0)
	{
		*rpce = '-';
		n = n * (-1);
		rpce++;
	}
	x = n % 10;
	if (n > 9)
	{
		rpce = ft_strjoin(rpce, ft_itoa((n - x) / 10));
		*rpce = '0' + x;
	}
	else
		*rpce = '0' + n;

	return (rpce);
}
