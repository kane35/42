/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:04:36 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/17 12:25:16 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split_whithespaces(char *str)
{
	char **tab;
	int word;
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			word++;
			str[i] = '\0';
			i++;
		}
		i++;
	}
	tab = (char**)malloc((sizeof(char*)) * (word + 1));
	tab[0] = (char*)malloc((sizeof(str) * ft_strlen(str)));
	tab[0] = str;
	i = 1;
	while (i <= word)
	{
		while (*str)
			str++;
		tab[i] = (char*)malloc((sizeof(str) * ft_strlen(str + 1)));
		tab[i] = str + 1;
		str++;
		i++;
	}
		tab[i+1] = (char*)malloc((sizeof(char*) * 1));
		tab[i+1] = "\0";	
	return (tab);
}

int		main(void)
{
	char *str;
	str = strdup("Bonjour les\namis de	42");
	char **tab;
	tab = ft_split_whithespaces(str);
	int i = 0;
	while (tab[i] != '\0')
		printf("%s\n", tab[i++]);	
	return (0);
}
