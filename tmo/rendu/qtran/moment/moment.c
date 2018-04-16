/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:05:33 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 11:47:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*pattern_call(int	i)
{
	static char	p[][8] = {" second", " minute", " hour", " day", " month", ""};

	return (p[i]);
}

char	*ft_strcat(char	*str, char	*s2)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_itoa(int t, char	**nbr,int *len)
{
	int		i;

	nbr = (char**)malloc(sizeof(char*));
	if (t == 0)
	{
		nbr[0] = (char*)malloc(sizeof(char) * 2);
		nbr[0][0] = '0';
		nbr[0][1] = '\0';
		return (nbr);
	}
	i = t;
	*len = 0;
	while (i != 0)
	{
		i = i / 10;
		(*len)++;
	}
	i = *len;
	nbr[0] = (char*)malloc(sizeof(char) * (*len + 1));
	nbr[0][*len] = '\0';
	(*len)--;
	while (*len >= 0)
	{
		nbr[0][*len] = (int)(t % 10 + 48);
		(*len)--;
		t = t / 10;
	}
	return (nbr);
}

char	*process_str(unsigned int	t, int index)
{
	char	*s;
	char	**nbr;
	int		len;

	nbr = NULL;
	nbr = ft_itoa(t, nbr, &len);
	s = (char*)malloc(sizeof(char) * (len + 12));
	s[0] = '\0';
	s[len + 11] = '\0';
	s = ft_strcat(s, nbr[0]);
	s = ft_strcat(s, pattern_call(index));
	if (t != 1)
		s = ft_strcat(s, "s");
	s = ft_strcat(s, " ago.");
	return (s);
}

char	*moment(unsigned int duration)
{
	char	*p;
	int		time[5];
	int		i;

	time[4]	= duration / 2592000;
	time[3] = duration / 86400;
	time[2] = duration / 3600;
	time[1] = duration / 60;
	time[0] = duration;

	if (duration == 0)
		return (process_str(0, 0));
	i = 4;
	p = NULL;
	while (i >= 0)
	{
		if (time[i] != 0)
		{
			p = process_str(time[i], i);
			break ;
		}
		i--;
	}
	return (p);
}
