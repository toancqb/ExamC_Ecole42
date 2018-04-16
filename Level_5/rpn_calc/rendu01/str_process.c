/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:48:10 by exam              #+#    #+#             */
/*   Updated: 2018/04/13 12:29:11 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strsub_and_dup(char *str, int i, int j)
{
	int		k;
	char	*s;

	s = (char*)malloc(sizeof(char) * (j - i + 2));
	s[j - i + 1] = '\0';
	k = 0;
	while (str[i] != '\0' && i <= j)
	{
		s[k] = str[i];
		i++;
		k++;
	}
	return (s);
}

char	**ft_count(char *str)
{
	int		i;
	int		len;
	char	**tab;

	len = 0;
	i = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			len++;
		else
		{
			i++;
			continue ;
		}
		while (str[i] != '\0' && str[i] != ' ')
			i++;
	}
	tab = (char**)malloc(sizeof(char*) * (len + 1));
	tab[len] = NULL;
	return (tab);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = ft_count(str);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != '\0' && str[j] != ' ')
				j++;
			tab[k++] = ft_strsub_and_dup(str, i, j - 1);
			i = j;
		}
		else
			i++;
	}
	return (tab);
}
