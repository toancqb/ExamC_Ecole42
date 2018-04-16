/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:39:47 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 16:54:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcat(char *dest, char*src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

char	**sort_len(char **cf)
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
				j++;
				continue ;
			}
			if (ft_strlen(cf[i]) > ft_strlen(cf[j]))
				swap(&cf[i], &cf[j]);
			j++;
		}
		i++;
	}
	return (cf);
}
