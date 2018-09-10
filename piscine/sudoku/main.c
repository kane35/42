/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:26:37 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 23:28:08 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "verify.h"

#include "verify_grid.h"

#include "print.h"

#include "init_grid.h"

int		main(int argc, char *argv[])
{
	int		grid[9][9];
	int		c;
	char	*grid_str;
	int		i;

	if (argc != 10)
	{
		write(1, "Le nombre de lignes est incorrectes\n", 36);
		return (0);
	}
	if (init_grid(grid, argv) == 0)
		return (0);
	if (v_grid(0, grid))
	{
		write(1, "Le sudoku n'est pas realisable\n", 31);
		return (0);
	}
	ft_putchar('\n');
	print_grid(grid);
	return (0);
}
