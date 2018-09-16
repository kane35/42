0/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 12:17:55 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/11 00:53:39 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
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
	return (resultat * let);
}
