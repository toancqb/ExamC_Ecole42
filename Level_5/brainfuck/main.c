/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:39:46 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 13:38:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

int		main(int argc, char *argv[])
{
	int		i;
	int		k;
	char	*s;
	char	*str;

	s = init_tab(2048);
	i = 0;
	k = 0;
	if (argc == 2 && ft_strlen(argv[1]) <= 4096)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			if (str[i] == '+' || str[i] == '-' || str[i] == '>'
					|| str[i] == '<' || str[i] == '.')
			{
				ft_op_af(str, &i, s , &k);
				i++;
			}
			else if (str[i] == '[' && s[k] == 0)
				ft_loop_open(str, &i, s, &k);
			else if (str[i] == ']' && s[k] != 0)
				ft_loop_close(str, &i, s, &k);
			else
				i++;
		}
		free(s);
	}
	else
		write(1, "\n", 1);
	return (0);
}
