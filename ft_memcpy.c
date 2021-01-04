/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:04:22 by oozsertt          #+#    #+#             */
/*   Updated: 2021/01/04 14:37:47 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (n == 0 || dst == src)
		return (dst);
	i = n - 1;
	ptr_dest = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	while (i > 0)
	{
		ptr_dest[i] = ptr_src[i];
		i--;
	}
	ptr_dest[i] = ptr_src[i];
	return (ptr_dest);
}
