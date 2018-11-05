/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:23:13 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/23 19:26:45 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>
# include <stdlib.h>

int		main(int argc, char *argv[]);
void	ft_add(char **tab);
void	ft_less(char **tab);
void	ft_mult(char **tab);
void	ft_putchar(char c);
void	ft_div(char **tab);
void	ft_mod(char **tab);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif
