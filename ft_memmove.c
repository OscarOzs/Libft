/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:54:35 by oozsertt          #+#    #+#             */
/*   Updated: 2021/01/04 15:46:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;
	size_t				i;

	ptr_src = (unsigned char*)src;
	ptr_dest = (unsigned char*)dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (ptr_src < ptr_dest)
	{
		i++;
		while (i <= len)
		{
			ptr_dest[len - i] = ptr_src[len - i];
			i++;
		}
	}
	else
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	return (ptr_dest);
}
