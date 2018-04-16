/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:44:18 by exam              #+#    #+#             */
/*   Updated: 2018/04/13 12:30:06 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_strlen(char	*str);
char	*ft_strsub_and_dup(char *str, int i, int j);
char	**ft_split(char *str);
void	init_stack();
void	push(int value);
int		pop();
int		nbr_elem();
int		ft_rpn_cal(char **tab, int *n);

#endif
