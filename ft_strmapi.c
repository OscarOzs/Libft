/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:09:47 by oozsertt          #+#    #+#             */
/*   Updated: 2020/11/09 19:57:33 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(unsigned int i, char c)
{
	
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*finalstr;
	int					finalstr_len;

	if (s == NULL || f == NULL)
		return (NULL);
	finalstr_len = ft_strlen(s);
	if ((finalstr == (char*)malloc(sizeof(char) * finalstr_len + 1) == NULL))
		return (NULL);
	finalstr[finalstr_len] = '\0';
	while (s[i] != '\0')
	{
		finalstr[i] = f(i, s[i]);
		i++;
	}
	return (finalstr);
}

int main(void)
{
	
}
