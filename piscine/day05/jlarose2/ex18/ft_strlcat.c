/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:31:27 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/16 04:04:09 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	unsigned int sizer;

	sizer = (ft_strlen(src) + size);
	i = 0;
	while (dest[i])
		i++;
	while (i < size)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (sizer);
}

int		main(void)
{
	char *s2;
	unsigned int u;

	u = 22;
	s2 = "frere adorer";
	char *s1 = strdup("bonjour mon petit");
	printf("%u\n", ft_strlcat(s1, s2, u));
	printf("%s\n", s1);
	printf("%lu\n", strlcat(s1, s2, u));
	printf("%s\n", s1);
	return (0);
}
