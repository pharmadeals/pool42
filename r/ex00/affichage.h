/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:28:45 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 15:57:28 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFFICHAGE_H
# define AFFICHAGE_H
# include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	print(int **tab);
#endif
