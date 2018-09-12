/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 01:04:25 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/12 05:37:21 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (malloc(sizeof(src) * i + 1))
		str = (char*)malloc(sizeof(*src) * i + 1);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
