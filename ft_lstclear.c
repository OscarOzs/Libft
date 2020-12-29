/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:55:47 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/29 17:15:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	
	if (*lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			(*lst) = temp;
		}
		*lst = NULL;
	}
}
