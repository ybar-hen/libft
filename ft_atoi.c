/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 06:03:27 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/08 21:36:00 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int rpce;
	int sign;

	rpce = 0;
	sign = 1;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
			rpce = rpce * 10 + ft_ctoi(*str);
		if (*str == '-')
			sign  = 0 - sign;
		str++;
	}
	return (rpce * sign);
}
