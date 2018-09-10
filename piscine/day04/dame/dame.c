/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dame.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 01:09:44 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/10 03:53:50 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		v_downleft(int pos, int grid[8][8])
{
	int sens;
	int x;
	int y;

		x = pos % 8;
		y = pos / 8;
		if (grid[y][x] != 0)
			return (0);
		if (x == 0 || y == 7)
			return (1);
		return (v_downleft(pos + 7, grid));
	return (1);
}

int		v_upright(int pos, int grid[8][8])
{
	int sens;
	int x;
	int y;

		x = pos % 8;
		y = pos / 8;
		if (grid[y][x] != 0)
			return (0);
		if (x == 7 || y == 0)
			return (1);
		return (v_upright(pos - 7, grid));
	return (1);
}

int		v_upleft(int pos, int grid[8][8])
{
	int sens;
	int x;
	int y;

		x = pos % 8;
		y = pos / 8;
		if (grid[y][x] != 0)
			return (0);
		if (x == 0 || 0 == 0)
			return (1);
		return (v_upleft(pos - 9, grid));
	return (1);
}

int		v_downright(int pos, int grid[8][8])
{
	int sens;
	int x;
	int y;

		x = pos % 8;
		y = pos / 8;
		if (grid[y][x] != 0)
			return (0);
		if (x == 7 || y == 7)
			return (1);
		return (v_downright(pos + 9, grid));
	return (1);
}

int		v_column(int pos, int grid[8][8])
{
	int y;
	int x;

	x = pos % 8;
	y = 0;
	while (y < 8)
	{
		if (grid[y][x] != 0)
			return (0);
		y++;
	}
	return (1);
}

int		v_line(int pos, int grid[8][8])
{
	int y;
	int x;

	x = 0;
	y = pos / 8;
	while (x < 8)
	{
		if (grid[y][x] != 0)
			return (0);
		x++;
	}
	return (1);
}

void	init(int grid[8][8])
{
	int line;
	int column;
	
	line = 0;
	while (line < 8)
	{
		column = 0;
		while (column < 8)
		{
			grid[line][column] = 0;
			column++;
		}
		line++;
	}
}

int		verif(int pos, int grid[8][8])
{	
	if (v_upright(pos, grid) == 0 || v_upleft(pos, grid) == 0 ||
	v_downright(pos, grid) == 0 || v_downleft(pos, grid) == 0 ||
	v_line(pos, grid) == 0 || v_column(pos, grid) == 0)
		return (0);
	return (1);
}

void	print(int grid[8][8])
{
	int line;
	int column;

	line = 0;
	while (line < 8)
	{	
		column = 0;
		while (column < 8)
		{
			ft_putchar(grid[line][column] + '0');
			ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}

int		rec(int pos, int grid [8][8])
{
	int x;
	int y;
	int i;

	i = 1;
	x = pos % 8;
	y = pos / 8;
	if (pos == 64)
		return (1);
	while (i < 16)
	{
		if (verif(pos, grid))
		{
			grid[y][x] = 8;
			if(rec(pos + i, grid))
				return (1);
			grid[y][x] = 0;
		}
		i++;
	}
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int	grid[8][8];
	int pos;

	pos = 27;
	init(grid);
	ft_putchar(rec(0, grid) + '0');
	ft_putchar('\n');
	print(grid);
	return(0);
}
