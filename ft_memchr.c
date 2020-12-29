/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:53:43 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/29 16:46:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*res;
	char	*temp;

	i = 0;
	res = NULL;
	temp = (unsigned char*)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (*temp == c)
		{
			res = temp;
			return (res);
		}
		i++;
		temp++;
	}
	return (res);
}
