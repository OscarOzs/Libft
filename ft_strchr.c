/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:42:27 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 19:57:12 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *res;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res = (char*)&s[i];
			return (res);
		}
		i++;
	}
	if (s[i] == c)
	{
		res = (char*)&s[i];
		return (res);
	}
	return (NULL);
}
