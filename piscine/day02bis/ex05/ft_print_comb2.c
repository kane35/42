/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:07:07 by jlarose           #+#    #+#             */
/*   Updated: 2018/08/31 00:15:39 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print2(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	if (a != 98)
		ft_putchar(',');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (100 > ++b)
			print2(a, b);
		a++;
		b = a;
	}
}
