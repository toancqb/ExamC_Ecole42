/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:16:37 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 11:30:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_HEADER_H
# define LIB_HEADER_H
# include <unistd.h>

typedef struct		s_res
{
	int begin;
	int end;
	int check;
}					t_res;

void	ft_putstr(char *str, int i, int j);
int		ft_strlen(char *str);
int		is_pal(char *str, int begin, int end);
void	ft_process(char *str);

#endif
