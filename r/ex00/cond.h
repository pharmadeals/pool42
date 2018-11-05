/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:30:43 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 15:58:05 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COND_H
# define COND_H
# include <stdlib.h>

int	check_ligne(int t, int **grille, int l, int c);

int	check_col(int t, int **grille, int c, int l);

int	check_sqr(int k, int **grille, int c, int l);

int	check_grille(int **grille);

int	check_taille(int argc, char **argv);

#endif
