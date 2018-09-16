/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 05:52:55 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/14 10:00:04 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s1)
{
	int len;

	len = 0;
	while (s1[len])
		len++;
	return(len);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int n1;
	int n2;
	int nbase;

	nbase = ft_strlen(base);
	n1 = nbr / nbase;
	n2 = nbr % nbase;
	if (n1 > 0)
		ft_putnbr_base(n1, base);
	ft_putchar(n2 + 30);
}

int		main(void)
{
	ft_putnbr_base(203, "8115d4d5d758d2s4");
	
	return (0);
}
