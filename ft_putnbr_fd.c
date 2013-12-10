/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 06:05:40 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 02:10:20 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	rpce;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * (-1);
	}
	rpce = nb % 10;
	if ( nb > 9)
	{
		ft_putnbr_fd((nb - rpce) / 10, fd);
		ft_putchar_fd(rpce + '0', fd);
	}
	else
		ft_putchar_fd('0' + nb, fd);
}
