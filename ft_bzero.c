/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:23:18 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/12 19:57:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*tempforfill;

	i = 0;
	tempforfill = s;
	while (i < n)
	{
		*tempforfill = '\0';
		i++;
		tempforfill++;
	}
}
