/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:06:01 by exam              #+#    #+#             */
/*   Updated: 2018/04/12 18:33:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <unistd.h>

typedef struct	s_res {
	int	begin;
	int	end;
	int	check;
}				t_res;

int		ft_strlen(char *str);
void	ft_putstr(char *str,int i, int j);
int		is_pal(char *str,int begin,int end);
void	biggest_pal(char *str);

#endif

