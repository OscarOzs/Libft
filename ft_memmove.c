/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:54:35 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/14 22:08:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;
	size_t				i;

	ptr_src = src;
	ptr_dest = dest;
	i = 0;
	if (ptr_src < ptr_dest)
	{
		i++;
		while (i < n)
		{
			ptr_dest[n - i] = ptr_src[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (ptr_dest);
}
