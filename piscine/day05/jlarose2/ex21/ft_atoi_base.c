/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:48:03 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/17 11:02:10 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}



void		ft_putnbr_base(int nbr, char *base)
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

int		ft_atoi_base(char *str, char *base)
{
	int let;
	int resultat;

	let = 1;
	resultat = 0;
	while (*str >= 8 && *str <= 32)
	{
		str++;
	}
	if (*str == '-')
	{
		let = -1;
		str++;
	}
	if (*str == '+' && let == 1)
		str++;
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + *str - '0';
		str++;
	}
	(ft_putnbr_base((resultat * let), base));
	return (0);
}
