/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:51:29 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 21:47:25 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>

int		iscorrect0(char **tab, int ijhl[4], int i, int j);
int		iscorrect1(char **tab, int ijhl[4], int i, int j);
int		iscorrect2(char **tab, int ijhl[4], int i, int j);
int		iscorrect3(char **tab, int ijhl[4], int i, int j);
int		iscorrect4(char **tab, int ijhl[4], int i, int j);
int		iscorrect6(char **tab, int ijhl[4], int i, int j);
int		iscorrect7(char **tab, int ijhl[4], int i, int j);
int		rightsize(char *str);
void	ft_putnbr(int nb);
int		whichcolle(char **tab, int hei, int len);
void	filltab(char *str, char **tab);
int		redirection(char **tab, int ijhl[4], int colle);
int		nestedwhile(char **tab, int hei, int len, int colle);
int		whichcolle_svl_l_svl_c(char **tab, int hei, int len);
int		whichcolle_1_l_svl_c(char **tab, int hei, int len);
int		whichcolle_svl_l_1_c(char **tab, int hei, int len);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen2(char *str);
int		ft_strlen(char *str);
int		ft_y(char *str);
int		n_rush(char *str);
void	print(int i, int x, int y);
char	*re_alloc(char *str, int n);
int		rush02(char *str);
int		main(void);
#endif
