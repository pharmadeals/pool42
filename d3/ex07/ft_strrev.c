/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 11:04:55 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/02 11:38:34 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	swap;

	i = 0;
	n = ft_strlen(str) - 1;
	while (i < n)
	{
		swap = str[i];
		str[i] = str[n];
		str[n] = swap;
		i++;
		n--;
	}
	return (str);
}
