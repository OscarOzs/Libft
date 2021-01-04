/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:21:39 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 16:21:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	size_t	i;
	size_t	j;

	temp = (char*)s;
	if ((unsigned char)c == '\0')
		return (temp + (ft_strlen(s)));
	i = 0;
	j = 0;
	while (temp[i] != '\0')
	{
		if ((unsigned char)temp[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (j > 0 || temp[0] == c)
		return (temp + j);
	return (NULL);
}
