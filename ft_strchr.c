/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:42:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/15 15:00:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
