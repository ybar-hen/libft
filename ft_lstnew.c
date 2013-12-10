/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 04:16:29 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 04:46:34 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newl;

	newl = (t_list *)malloc(sizeof(t_list));
	if (newl == NULL)
		return (NULL);
	if (content == NULL)
	{
		newl->content = NULL;
		newl->content_size = 0;
	}
	else
	{
		newl->content = malloc(sizeof(content));
		if (newl->content == NULL)
			return (NULL);
		ft_memcpy((newl->content), content, sizeof(content));
		newl->content_size = content_size;
	}
	newl->next = NULL;
	return (newl);
}
