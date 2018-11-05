/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:09:15 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:11:34 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i])
	{
		if (i == n)
			return (dest);
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
