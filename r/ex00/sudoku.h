/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:42:08 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 15:57:50 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include "cond.h"

int	**conv(char **tab);

int	remplace(int **grille, int position);

int	remplace2(int **grille, int position);

int	egal(int **tab, int **tab2);
#endif
