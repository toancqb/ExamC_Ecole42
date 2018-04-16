/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 15:42:25 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 16:53:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

char	*reformat_str(char *str)
{
	int		i;
	char	*t;

	i = 0;
	t = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			t[i] = str[i] + 32;
		else
			t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

int		cmp_alpha(char *s1, char *s2)
{
	int		i;
	char	*tmp1;
	char	*tmp2;

	tmp1 = reformat_str(s1);
	tmp2 = reformat_str(s2);
	i = 0;
	while (tmp1[i] && tmp2[i] && tmp1[i] == tmp2[i])
	{
		i++;
	}
	return (tmp1[i] - tmp2[i]);
}

char	**sort_alpha(char **cf)
{
	int		i;
	int		j;

	i = 0;
	while (cf[i + 1])
	{
		j = i + 1;
		while (cf[j])
		{
			if (ft_strlen(cf[i]) == ft_strlen(cf[j]))
			{
				if (cmp_alpha(cf[i], cf[j]) > 0)
					swap(&cf[i], &cf[j]);
			}
			j++;
		}
		i++;
	}
	return (cf);
}

void	ft_print(char **cf)
{
	int i;

	i = 0;
	while (cf[i])
	{
		if (i >= 1)
		{	
			if (ft_strlen(cf[i]) == ft_strlen(cf[i - 1]))
			{
				ft_putstr(" ");
				ft_putstr(cf[i]);
			}
			else if (ft_strlen(cf[i]) == ft_strlen(cf[i - 1]))
				ft_putstr(cf[i]);
			else if (ft_strlen(cf[i]) != ft_strlen(cf[i - 1]))
			{
				ft_putstr("\n");
				ft_putstr(cf[i]);
			}
		}
		else
			ft_putstr(cf[i]);
		i++;
	}
}
