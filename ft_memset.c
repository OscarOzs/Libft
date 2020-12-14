/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:07:18 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/14 15:34:33 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*tempfill;

// 	i = 0;
// 	tempfill = s;
// 	while (i < n)
// 	{
// 		*tempfill = c;
// 		i++;
// 		tempfill++;
// 	}
// 	return (s);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptrs;

	i = 0;
	ptrs = (char*)s;
	while (i < n)
	{
		ptrs[i] = c;
		i++;
	}
	return (ptrs);
}
