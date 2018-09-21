/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:39:21 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/03 20:52:14 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb3(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 10)
	{
		while (b < 10)
		{
			while (c < 10)
				ft_comb3(a, b, c++);
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
