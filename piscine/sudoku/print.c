/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:57:26 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 22:56:29 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "print.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int grid[9][9])
{
	int line;
	int column;

	line = 0;
	while (line < 9)
	{
		column = 0;
		while (column < 9)
		{
			ft_putchar(grid[line][column] + '0');
			ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
