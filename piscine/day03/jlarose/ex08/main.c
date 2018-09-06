/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:05:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/06 04:01:32 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <math.h>

#include <unistd.h>

#include <stdio.h>
	
int		ft_putnbr(int nbr);

void	ft_putchar(char c);

int     ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac)
	{
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[2]));
	}
	return (0);
}
