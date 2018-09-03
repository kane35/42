/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:05:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/02 23:57:47 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void printe(int caracter, int line, int es, int v)
{
	int espace;
	int count;
		
	count = 0;

	while (line > 0)
	{
		int c;
		int origin;

		espace = es;
		c = caracter;
		while (espace-- > 0)
			ft_putchar(' ');
		ft_putchar('/');
		if (v == 1)
			origin = ((c - 5) / 2) + 3;
		while (c - 2 > 0)
		{
				ft_putchar('*');
			c--;
		}	
		count++;
		ft_putchar('\\');
		ft_putchar('\n');
		line--;
		es--;
		caracter += 2;
	}
}

int		print_pyramide(int y, int v, int origin)
{
	int h;
	int c;
	int i;
	int espace;
	int end;

	end = 0;
	i = 1;
	c = 3;
	if (y > 0)
	{
		h = 3;
		espace = origin;
	}
	while (y > 0)
	{
		if (y == 1)
			end = 1;
		if (v == 1)
			 printe(c, h, espace, end);
		if ((y % 2) == 0)
			i++;
		espace -= (h + i);
		c += 2 * (h + i);
		h++;
		y--;
	}
	return (c - h);
}

int		main(void)
{
	int espace;
	
	espace = print_pyramide(2, 0, 0);
	if ((espace % 2) == 1)
		espace = (espace / 2) - 1;
	else
		espace = (espace / 2) - 2;
	print_pyramide(2, 1, espace);
	return (0);
}
