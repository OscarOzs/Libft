/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:52:24 by oozsertt          #+#    #+#             */
/*   Updated: 2020/11/10 20:41:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	int				temp;

	i = 0;
	temp = start;
	while (s[temp] != '\0' && i < len)
	{
		temp++;
		i++;
	}
	if (s[temp] == '\0' && i != len)
		i++;
	if ((str = (char*)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	str[i - 1] = '\0';
	i = 0;
	while (i < (len - 1) && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
