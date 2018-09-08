/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 08:51:06 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 00:46:25 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

int		v_line(int nb, int pos, int grid[9][9])
{
	int y;
	int x;

	y = pos / 9;
	x  = 0;
	while(x < 9)
	{
		if (grid[y][x] == nb)
			return (1);
		x++;
	}
	return (0);
}

int		v_column(int nb, int pos, int grid[9][9])
{
	int y;
	int x;

	y = 0;
	x  = pos % 9;
	while(y < 9)
	{
		if (grid[y][x] == nb)
			return (1);
		y++;
	}
	return (0);
}

int		v_squar(int nb, int pos, int grid [9][9])
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
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int		v_grid(int pos, int grid[9][9])
{
	int x = pos % 9;
	int y = pos / 9;
	int nb;

	nb = 1;
	if (pos == 81)
		return 0;
	if (grid[y][x] != 0)
		return (v_grid(pos + 1, grid));
	while (nb <= 9)
	{
		if (v_line(nb, pos, grid) == 0 && v_column(nb, pos, grid) == 0 && v_squar(nb, pos, grid) == 0)
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

int		main(int argc, char *argv[])
{
	int grid[9][9];
	int line;
	int column;
	line = 0;
	if (argc != 10)
		write (1,"Le nombre de lignes est incorrectes\n" , 36);
	while (line < 9)
	{	
		char *grid_str = argv[line + 1];
		int c;

		c = 0;
		while (grid_str[c])
			c++;
		if (c != 9)
		{
			write (1,"Le nombre de chiffres est incorrectes\n" , 36);
			return (1);
		}
		
		column = 0;
		while (column < 9)
		{
			if (grid_str[column] == '.' )
				grid_str[column] = '0';
			grid[line][column] = grid_str[column] - '0';
			column++;
		}
		line++;
	}

	print_grid(grid);
	if (v_grid(0, grid) == 1)
	{
		write (1, "Le sudoku n'est pas realisable\n", 31);
		return (0);
	}
	ft_putchar('\n');
	print_grid(grid);

	return (0);
}
