/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:18:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 23:26:15 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "init_grid.h"

int		init_grid(int grid[9][9], char *argv[])
{
	int		line;
	int		column;
	char	*grid_str;

	while (line < 9)
	{
		grid_str = argv[line + 1];
		column = 0;
		while (column < 9)
		{
			if (grid_str[column] == '.')
				grid_str[column] = '0';
			grid[line][column] = grid_str[column] - '0';
			column++;
		}
		line++;
	}
	return (1);
}
