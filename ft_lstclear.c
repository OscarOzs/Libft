/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:55:47 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/15 17:24:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			ft_lstdelone(*lst, del);
			free((*lst));
			(*lst) = (*lst)->next;
		}
		*lst = NULL;
	}
}
