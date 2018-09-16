/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:48:04 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/13 07:17:57 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(int argc, char **argv)
{
	int		size;
	int		i;
	char	*str;

	size = 0;
	i = 1;
	while (i < argc)
	{
		str = argv[i];
		while (*str)
		{
			size++;
			str++;
		}
		size += 1;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*str;
	char	*str2;
	int		i;
	int		d;

	d = 0;
	i = 1;
	size = count(argc, argv);
	str = malloc(sizeof(char*) * size);
	if (str == NULL)
		return (0);
	while (i < argc)
	{
		str2 = argv[i];
		while (*str2)
		{
			str[d] = *str2;
			str2++;
			d++;
		}
		str[d] = '\n';
		d++;
		i++;
	}
	str[d - 1] = '\0';
	return (str);
}
