/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:00:52 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/04 12:06:00 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < -12)
		return (0);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	if (nb < -1)
		nb *= ft_recursive_factorial(nb + 1);
	return (nb);
}

int		main(void)
{
	printf("%d", ft_recursive_factorial(-9));
	return (0);
}
