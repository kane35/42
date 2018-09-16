/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 03:48:49 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/14 04:36:55 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}
