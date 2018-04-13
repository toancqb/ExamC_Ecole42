/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:28:09 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 12:08:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_LIB_H
# define _FT_LIB_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stack
{
	int	v;
	struct s_stack *next;
}				t_stack;

void	st_push(t_stack **st, int n);
int		st_pop(t_stack **st);
int		st_num_elem(t_stack **st);
char	**ft_split(char *str);
int		classification(char *str);
#endif
