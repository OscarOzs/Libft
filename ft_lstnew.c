/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:05:49 by oozsertt          #+#    #+#             */
/*   Updated: 2020/11/18 16:46:02 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int b)
{
	t_list *new_node;

	if ((new_node = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_node->a = b;
	return (new_node);
}
