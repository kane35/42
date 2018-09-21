/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:48:03 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/18 05:45:35 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verifbase(char *nb, char *base)
{
	int i;
	int j;
	int m;

	i = 0;
	while (nb[i])
	{
		m = 0;
		j = 0;
		while (base[j])
		{
			if (nb[i] == base[j])
				m = 1;
			j++;
		}
		if (m == 0)
			return (0);
		i++;
	}
	return (1);
}

int		verif(char *nb)
{
	int i;
	int j;

	i = 0;
	while (nb[i])
	{
		j = i + 1;
		while (nb[j])
		{
			if (nb[i] == nb[j] || nb[i] == '+' || nb[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		verifall(char *nb, char *base)
{
	int ba;
	int i;

	i = 0;
	while (base[i])
		i++;
	ba = i;
	if (ba < 2)
		return (0);
	if (verif(base) == 0 || ba <= 1)
		return (0);
	if (verifbase(nb, base) == 0)
		return (0);
	return (ba);
}

int		convbase(char *str, char *base, int ba)
{
	int i;
	int resultat;

	resultat = 0;
	while (*str >= base[0] && *str <= base[ba - 1])
	{
		i = 0;
		while (*str != base[i])
			i++;
		resultat = resultat * ba + i;
		str++;
	}
	return (resultat);
}

int		ft_atoi_base(char *str, char *base)
{
	int let;
	int resultat;
	int ba;
	int i;

	let = 1;
	resultat = 0;
	ba = verifall(str, base);
	while (*str >= 8 && *str <= 32)
		str++;
	if (*str == '-')
	{
		let = -1;
		str++;
	}
	if (*str == '+' && let == 1)
		str++;
	return (convbase(str, base, ba));
}
