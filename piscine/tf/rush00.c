/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:14:18 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/01 20:18:30 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	caractere(char c1, char c2, char c3, int x)
{
	int tow;

	tow = x;
	if (x >= 1)
		ft_putchar(c1);
	while (x - 2 > 0)
	{
		ft_putchar(c2);
		x--;
	}
	if (tow >= 2)
		ft_putchar(c3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		tow;
	char	*str;

	str = "Erreur: Nous ne pouvons pas executer des valeurs negatives";
	if (x > 0 && y > 0)
	{
		tow = y;
		if (y >= 1)
			caractere('o', '-', 'o', x);
		while (y - 2 > 0)
		{
			caractere('|', ' ', '|', x);
			y--;
		}
		if (tow >= 2)
			caractere('o', '-', 'o', x);
	}
	else
	{
		while (*str)
			ft_putchar(*str++);
	}
}
