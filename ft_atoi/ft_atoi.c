/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:29:33 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 11:09:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min_value(const char *s)
{
	int i;

	i = 0;
	if (s[0] == '-' && s[1] == '2' && s[2] == '1' && s[3] == 4 && s[4] == '7'
			&& s[5] == '4' && s[6] == '8' && s[7] == '3' && s[8] == '6'
			&& s[9] == '4' && s[10] == '8')
		return (-2147483648);
	else return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int flag;

	i = 0;
	flag = 1;
	if (min_value(str) != 0)
		return (min_value(str));
	if (str[i] == '-')
	{
		i++;
		flag = -1;
	}
	if ((int)str[i] < 48 || (int)str[i] > 57)
		return (0);
	res = (int)str[i++] - 48;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (int)str[i++] - 48;
	}
	if (flag == 1)
		return (res);
	else
		return (-res);
}
