/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:05:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/03 11:59:36 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		main(void)
{
	int i;
	int tab[16] = {5, 5 ,8 , 46, 8, 411, 68, 4, 8, 56,68, 4, 58, 78, 9, 6};

	ft_sort_integer_table(tab, 16);
	i = 0;
	while (i < 16)
	{
		printf("%d", tab[i]);
		printf("\n");
		i++;
	}
	return (0);
}
