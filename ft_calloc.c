/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:45:56 by oozsertt          #+#    #+#             */
/*   Updated: 2021/01/04 16:40:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (size * count));
	if (str == NULL)
		return (NULL);
	str = ft_memset(str, 0, (size * count));
	return (str);
}
