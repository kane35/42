/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 05:43:32 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/12 19:09:40 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (tab = NULL);
	if (malloc(sizeof(tab) * size))
	{
		tab = (int*)malloc(sizeof(tab) * size);
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (NULL);
}
