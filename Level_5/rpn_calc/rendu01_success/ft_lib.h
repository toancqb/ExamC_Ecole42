/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 10:03:48 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 11:13:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	**ft_strsplit(char *str, char c);
void	st_init();
void	push(int value);
int		pop();
int		nb_elem();
int		classification(char *str);
int		ft_op(char c, int x, int y);

#endif
