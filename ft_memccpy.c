/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:12:50 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/14 22:47:41 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	if (src == dest || n == 0)
		return (NULL);
	ptr_dest = dest;
	ptr_src = src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == c)
		{
			i++;
			return (ptr_dest + i);
		}
		i++;
	}
	return (NULL);
}
