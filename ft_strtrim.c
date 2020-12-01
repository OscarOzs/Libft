/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:43:36 by oozsertt          #+#    #+#             */
/*   Updated: 2020/12/01 17:29:23 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	final_len(char const *str, char const *set)
{
	int i;
	int count;
	int len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (is_charset(str[i], set) == 1 && str[i] != '\0')
	{
		i++;
		count++;
	}
	while (is_charset(str[i], set) == 0 && str[i] != '\0')
		i++;
	while (str[i] != '\0')
		i++;
	i--;
	while (is_charset(str[i], set) == 1 && i > 0)
	{
		i--;
		count++;
	}
	if ((len - count) < 0)
		return (0);
	return (len - count);
}

static char	*fill_finalstr(char const *str, char const *set, char *finalstr)
{
	int len;
	int i;
	int j;

	len = ft_strlen(str);
	len--;
	while (is_charset(str[len], set) == 1 && len > 0)
		len--;
	i = 0;
	while (is_charset(str[i], set) == 1 && str[i] != '\0')
		i++;
	j = 0;
	while (i <= len)
	{
		finalstr[j] = str[i];
		i++;
		j++;
	}
	return (finalstr);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*finalstr;
	int		finalstr_len;

	finalstr_len = final_len(s1, set);
	if ((finalstr = (char*)malloc(sizeof(char) * finalstr_len + 1)) == NULL)
		return (NULL);
	finalstr[finalstr_len] = '\0';
	finalstr = fill_finalstr(s1, set, finalstr);
	return (finalstr);
}
