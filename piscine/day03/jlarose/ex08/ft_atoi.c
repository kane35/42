/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 12:17:55 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/05 12:15:30 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int let;
	int resultat;

	let = 1;
	resultat = 0;
	while (*str == ' ' || *str == '+' || *str == '\n' || *str == '\r')
	{
		str++;
	}
	while (*str == '\f' || *str == '\n' || *str == '\t' || *str == '\v')
	{
		str++;
	}
	if (*str == '-' && let == 1)
	{
		let = -1;
		str + i;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + *str - '0';
		str++;
	}
	return (resultat * let);
}
