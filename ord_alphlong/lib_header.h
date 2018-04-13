/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:40:13 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 16:58:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIB_HEADER_H
# define _LIB_HEADER_H
# include <stdlib.h>
# include <unistd.h>
# define SCN(i) str[i] == ' ' || str[i] == '\t'

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	swap(char **s1, char **s2);

void	ft_print(char **cf);

char	**ft_create(char *str);

char	**ft_fill_tab(char *str, char **cf);

char	**ft_split(char *str, char **cf);

char	**sort_len(char **cf);

char	**sort_alpha(char **cf);

int		cmp_alpha(char *s1, char *s2);

#endif
