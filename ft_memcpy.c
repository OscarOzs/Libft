/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:04:22 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/13 02:03:50 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	if (n == 0 || dest == src)
		return (dest);
	i = n - 1;
	ptr_dest = (char*)dest;
	ptr_src = (char*)src;
	while (i > 0)
	{
		ptr_dest[i] = ptr_src[i];
		i--;
	}
	return (ptr_dest);
}
