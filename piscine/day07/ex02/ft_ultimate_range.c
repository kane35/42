/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:57:25 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/12 18:57:49 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int 	size;
	int 	*tab;
	int 	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		*range = NULL;
	if (malloc(sizeof(tab) * size))
	{
		tab = (int*)malloc(sizeof(tab) * size);
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
		return (size);
	}
	return (0);
}
