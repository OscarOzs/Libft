/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:00:45 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 01:03:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static	int	ft_islittle(const	char *s1, const	char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (1);
	else
		return (0);
}

static	int	ft_strlencustom(const	char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*res;

	if (ft_strlencustom(little) == 0)
	{
		res = (char*)big;
		return (res);
	}
	i = 0;
	res = NULL;
	while (big[i] != '\0' && i < len)
	{
		if (ft_islittle(little, &big[i]) == 1)
		{
			res = (char*)&big[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}
