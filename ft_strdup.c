/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 01:12:09 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/01 17:40:30 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	while (s[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
