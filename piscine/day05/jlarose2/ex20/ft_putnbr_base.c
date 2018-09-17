/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:28:05 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/17 01:31:26 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int n1;
	int n2;
	int up;
	int ba;

	ba = ft_strlen(base);
	up = 0;
	if (nbr == -2147483648)
	{
		nbr++;
		up = 1;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	n1 = nbr % ba;
	n2 = nbr / ba;
	if (n2 > 0)
		ft_putnbr_base(n2, base);
	if (up == 1)
		n1++;
	ft_putchar(base[n1]);
}
