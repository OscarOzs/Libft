/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:04:22 by oozsertt          #+#    #+#             */
/*   Updated: 2020/09/17 16:54:18 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*tempforfill;
	const void	*temp;

	temp = src;
	tempforfill = dest;
	i = 0;
	while (i < n)
	{
		*(char*)tempforfill = *(char*)src;
		tempforfill++;
		src++;
		i++;
	}
	src = temp;
	return (dest);
}
