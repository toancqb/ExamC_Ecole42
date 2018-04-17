/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 10:08:52 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 10:35:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_count(char *str, char c)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			len++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (len);
}

char	*ft_strsub(char *str, int i, int j)
{
	char	*s;
	int		k;

	s = (char*)malloc(sizeof(char) * (j - i + 1));
	s[j - i] = '\0';
	k = 0;
	while (str[i + k] != '\0' && i + k < j)
	{
		s[k] = str[i + k];
		k++;
	}
	return (s);
}

char	**ft_strsplit(char *str, char c)
{
	char	**tab;
	int		len = 0;
	int		i = 0;
	int		k = 0;
	int		j;

	len = ft_count(str, c);
	tab = (char**)malloc(sizeof(char*) * (len + 1));
	tab[len] = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			j = i;
			while (str[j] != '\0' && str[j] != c)
				j++;
			if (j > i)
				tab[k++] = ft_strsub(str, i, j);
			i = j;
		}
		else
			i++;
	}
	return (tab);
}
