/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:45:38 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 22:57:13 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "verify_grid.h"

#include "verify.h"

int		v_grid(int pos, int grid[9][9])
{
	int x;
	int y;
	int nb;

	x = pos % 9;
	y = pos / 9;
	nb = 1;
	if (pos == 81)
		return (0);
	if (grid[y][x] != 0)
		return (v_grid(pos + 1, grid));
	while (nb <= 9)
	{
		if (v_line(nb, pos, grid) &&
		v_column(nb, pos, grid) &&
		v_squar(nb, pos, grid))
		{
			grid[y][x] = nb;
			if (v_grid(pos + 1, grid) == 0)
				return (0);
		}
		nb++;
	}
	grid[y][x] = 0;
	return (1);
}
