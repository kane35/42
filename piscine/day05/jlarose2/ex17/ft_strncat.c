/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:49:56 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/10 14:09:23 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (nb > 0)
	{
		dest[i] = *src++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
