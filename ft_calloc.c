/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:45:56 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/14 15:54:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (size * nmemb));
	if (str == NULL)
		return (NULL);
	str = ft_memset(str, 0, (size * nmemb));
	return (str);
}
