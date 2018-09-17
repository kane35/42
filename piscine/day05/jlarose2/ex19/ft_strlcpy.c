/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 00:09:15 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/17 00:57:53 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

int		ft_strlen(char *str)
{
	int i;
			
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int sizer;

	sizer = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i - 1] = '\0';
	}
	return (sizer);
}

int		main(void)
{
	char *s2;
	unsigned int u;

	u = 15;
	s2 = "frere adorer";
	char *s1 = strdup("bonjour mon petit");
	printf("%u\n", ft_strlcpy(s1, s2, u));
	printf("%s\n", s1);
	printf("%lu\n", strlcpy(s1, s2, u));
	printf("%s\n", s1);
	return (0);
}

