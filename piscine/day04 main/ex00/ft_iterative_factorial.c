/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:05:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/04 02:13:49 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_iterative_factorial(int nb)
{
	int sign;
	int resultat;

	sign = 1;
	if (nb >= 12 || nb <= -12)
		return (0);
	if (nb < 0)
	{
		nb *= -1;
		if ((nb % 2) == 1)
		{
			sign = -1;
		}
	}
	resultat = nb;
	while (nb > 1)
	{
		nb--;
		resultat *= nb;
	}
	return (resultat * sign);
}

int		main(void)
{
	int resultat;

	resultat = ft_iterative_factorial(0);
	printf("%d", resultat);
	return (0);
}
