/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 01:36:42 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/03 17:59:57 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int		main(void)
{
	char *str = "Coucou";
	int nb;

	nb = 0;
	nb = ft_strlen(str);
	printf("%d", nb);
	return (0);
}
