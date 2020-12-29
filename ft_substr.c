/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:52:24 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/29 17:10:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	unsigned int	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start < len_s && len > 0)
	{
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
			str[i++] = s[start++];
		str[i] = '\0';
	}
	else
	{
		str = (char*)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
	}
	return (str);
}
