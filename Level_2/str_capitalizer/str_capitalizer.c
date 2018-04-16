/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:13:34 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 11:57:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		letter(char c)
{
	if ((int)c >= 65 && (int)c <= 90)
		return (2);
	if ((int)c >= 97 && (int)c <= 122)
		return (1);
	return (0);
}

void	ft_pr_cap(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (letter(str[i]) == 2)
			str[i] += 32;
		if ((i == 0 && letter(str[i]) == 1) ||
				(i >= 1 && (str[i - 1] == ' ' || str[i - 1] == '\t')
							&& letter(str[i]) == 1))
		{
			ft_putchar((int)str[i++] - 32);
			continue;
		}
		ft_putchar(str[i++]);
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else if (argc >= 2)
	{
		while (i < argc)
		{
			ft_pr_cap(argv[i]);
			write(1, "\n", 1);
			i++;	
		}
	}
}
