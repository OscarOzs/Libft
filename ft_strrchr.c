/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:21:39 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 15:19:33 by oozsertt         ###   ########.fr       */
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
		i++;
	while (i > 0)
	{
		if (s[i] == c)
		{
			res = (char*)&s[i];
			return (res);
		}
		i--;
	}
	return (NULL);
}
