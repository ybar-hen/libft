/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 04:17:13 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 04:28:32 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list list;
	t_list next;

	list = *alst;
	while (list)
	{
		next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = next;
	}
	*alst = NULL;
}
