/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:00:52 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/04 12:08:47 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
