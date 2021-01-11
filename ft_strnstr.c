/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:00:45 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 11:35:34 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_little(const	char *s1, const	char *s2, size_t i, size_t len)
{
	size_t j;

	j = 0;
	while (s1[j] == s2[i] && s1[j] != '\0' && s2[i] != '\0' && i < len)
	{
		i++;
		j++;
	}
	if (s1[j] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (is_little(needle, haystack, i, len) == 1)
				return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
