/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:21:39 by user42            #+#    #+#             */
/*   Updated: 2020/09/15 14:48:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = (char*)&s[i];
		i++;
	}
	if (s[i] == c)
	{
		res = (char*)&s[i];
		return (res);
	}
	return (NULL);
}
