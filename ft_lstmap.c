/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 20:29:09 by oozsertt          #+#    #+#             */
/*   Updated: 2020/11/30 17:55:52 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	if (f == NULL || lst == NULL)
		return (NULL);
	content = NULL;
	newlst = NULL;
	while (lst != NULL)
	{
		if ((content = f(lst->content)) == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		if ((newnode = ft_lstnew(content)) == NULL)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
