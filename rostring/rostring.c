/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:01:18 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 13:37:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int		letter(char c)
{
	if (c == ' ' || c == '\t')
		return (0);
	return (1);
}

char	**count_word(char *str)
{
	int		i;
	int		count;
	char	**res;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && letter(str[i])) ||
				(i >= 1 && letter(str[i - 1]) == 0 && letter(str[i]) == 1))
		{
			count++;
		}
		i++;
	}
	res = (char**)malloc(sizeof(char*) * (count + 1));
	res[count] = 0;
	return (res);
}

int		ft_strlen_bg(char *str, int n)
{
	int i;
	int len;

	i = n;
	len = 0;
	while (letter(str[i]) == 0)
		i++;
	while (letter(str[i]) != 0 && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_ros(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	res = count_word(str);
	i = 0;
	j = 0;
	while (letter(str[i]) == 0)
		i++;
	while (str[i] != '\0' && res[j] != 0)
	{
		while (str[i] != '\0' && letter(str[i]) == 0)
			i++;
		k = 0;
		res[j] = (char*)malloc(sizeof(char) * (ft_strlen_bg(str, i) + 1));
		while (str[i] != '\0' && letter(str[i]) == 1)
		{
			res[j][k++] = str[i++];
		}
		res[j][k] = '\0';
		j++;
	}
	return (res);
}

int		main(int argc, char *argv[])
{
	char	**t;
	int		i;
	int		len;

	t = 0;
	if (argc == 2)
	{
		t = ft_ros(argv[1]);
		len = 0;
		while (t[len] != 0)
			len++;
		if (len >= 1)
		{
			i = 1;
			while (t[i] != 0)
			{
				ft_putstr(t[i]);
				write(1, " ", 1);
				i++;
			}
		}
		ft_putstr(t[0]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);	
}
