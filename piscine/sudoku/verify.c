/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:08:29 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 22:15:04 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "verify.h"

int		v_line(int nb, int pos, int grid[9][9])
{
	int y;
	int x;

	y = pos / 9;
	x = 0;
	while (x < 9)
	{
		if (grid[y][x] == nb)
			return (0);
		x++;
	}
	return (1);
}

int		v_column(int nb, int pos, int grid[9][9])
{
	int y;
	int x;

	y = 0;
	x = pos % 9;
	while (y < 9)
	{
		if (grid[y][x] == nb)
			return (0);
		y++;
	}
	return (1);
}

int		v_squar(int nb, int pos, int grid[9][9])
{
	int x;
	int y;
	int nbx;
	int nby;

	x = ((pos % 9) / 3) * 3;
	y = ((pos / 9) / 3) * 3;
	nby = y + 3;
	nbx = x + 3;
	while (y < nby)
	{
		x = nbx - 3;
		while (x < nbx)
		{
			if (nb == grid[y][x])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
