/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 01:30:18 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/03 17:38:53 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int at;
	int bt;

	at = *a;
	bt = *b;
	*a = at / bt;
	*b = at % bt;
}

int		main(void)
{
	int a;
	int b;

	a = -9;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	return (0);
}
