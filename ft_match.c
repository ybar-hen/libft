/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:52:47 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 03:29:17 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* can match an xpression (needle) with '*' inside, the '*' count for anythng */
int		ft_match(char *s1, char *s2)
{	int		rpce;
	int		posx;
	static	int special = 0;

	rpce = 0;
	posx = ft_in_str_(s2, "*", 3);
	if (posx == -1)
	{	if (special == 0)
			rpce = (ft_in_str_(s1, s2, 0) == 0) ? 1 : 0 ;
		else
			rpce = (ft_in_str_(s1, s2, special) > -1) ? 1 : 0 ;
	} else if (posx == 0)
	{	special++;
		if (ft_in_str_((s1 + 1), s2, special++) >= 0)
			rpce = (rpce == 0 && ft_in_str_((s1 + 1), s2, special++) > -1) ? 1 : 0;
		else
			rpce = ft_match(s1, (s2 + 1));
	} else if ((size_t)posx == (ft_strlen(s2)-1))
	{	*(s2 + posx) = '\0';
		special += 2;
		rpce = ft_match(s1, s2);
	} else
	{	*(s2 + posx) = '\0';
		special += 3;
		rpce = (ft_match(s1, s2) && ft_match(s1, (s2 + posx + 1)));
	}	return (rpce);
}
