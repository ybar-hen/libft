/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 04:17:53 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 04:45:59 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*plst;
	t_list	*plst2;
	t_list	*newlist;
	t_list	*newlist2;

	plst = lst;
	while (plst)
	{
		f(plst);
		plst = plst->next;
	}
	newlist = ft_lstnew(lst->content, lst->content_size);
	if (newlist == NULL)
		return (NULL);
	plst2 = newlist;
	while (lst->next)
	{
		newlist2 = ft_lstnew((lst->next)->content, (lst->next)->content_size);
		if (newlist2 == NULL)
			return (NULL);
		newlist->next = newlist2;
		lst = lst->next;
	}
	return (plst2);
}
