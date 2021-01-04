/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:12:50 by oozsertt          #+#    #+#             */
/*   Updated: 2021/01/04 14:48:04 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned char		*ptr_src;
	size_t				i;

	if (src == dst || n == 0)
		return (NULL);
	ptr_dest = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == (unsigned char)c)
		{
			i++;
			return (ptr_dest + i);
		}
		i++;
	}
	return (NULL);
}
