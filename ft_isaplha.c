/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaplha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 05:08:12 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/08 21:40:24 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha (int c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}
