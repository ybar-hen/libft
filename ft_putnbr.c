/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 06:05:40 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 01:44:24 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int	rpce;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	rpce = nb % 10;
	if ( nb > 9)
	{
		ft_putnbr((nb - rpce) / 10);
		ft_putchar(rpce + '0');
	}
	else
		ft_putchar('0' + nb);
}
