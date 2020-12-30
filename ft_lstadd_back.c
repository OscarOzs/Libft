/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 03:27:24 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/30 18:20:48 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		temp = *alst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	if ((*alst) == NULL)
	{
		(*alst) = new;
		new->next = NULL;
	}
	else
	{
		tmp = (*alst);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->next = NULL;
	}
}