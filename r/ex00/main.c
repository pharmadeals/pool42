/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:39:39 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 18:43:45 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "cond.h"
#include "affichage.h"

int	intermediaire(int **grille, int **grille2)
{
	if (!check_grille(grille))
		return (0);
	if (remplace(grille, 0) == 0)
		return (0);
	if (remplace2(grille2, 80) == 0)
		return (0);
	if (egal(grille, grille2) == 0)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int **grille;
	int **grille2;

	if (check_taille(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	grille = conv(argv);
	grille2 = conv(argv);
	if (intermediaire(grille, grille2) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	print(grille);
	return (0);
}
