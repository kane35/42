/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:11:34 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/04 13:12:32 by jlarose          ###   ########.fr       */
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

	resultat = nb;
	if (nb >= 12 || nb <= -12)
		return (0);
	if (nb > 0)
	{
		while (nb > 1)
		{
			nb--;
			resultat *= nb;
		}
	}
	else
	{
		while (nb < -1)
		{
			nb++;
			resultat *= nb;
		}
	}
	return (resultat);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(-10));
	return (0);
}
