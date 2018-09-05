/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:05:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/05 11:44:21 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int i2;
	int itmp;

	i2 = 0;
	i = 0;
	while (i < size)
	{
		while (i2 < size)
		{
			if (tab[i] < tab[i2])
			{
				itmp = tab[i];
				tab[i] = tab[i2];
				tab[i2] = itmp;
			}
			i2++;
		}
		i2 = 0;
		i++;
	}
}
