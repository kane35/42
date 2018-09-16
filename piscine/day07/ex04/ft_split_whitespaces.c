/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:04:36 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/14 11:11:27 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whithespaces(char *str)
{
	char **tab;
	int word;
	int i;

	i = 1;
	while (*str)
	{
		if (*str == ' ' || *str == 9 || *str == '\n')
		{
			*str = '\0';
			word++;
			str++;
		}
		str++;
	}
	*tab = (char*)malloc((sizeof(char*)) * word);
	tab[0] = str;
	while (i < word)
	{
		while (*str)
			str++;
		str++;
		tab[i] = str;
	}
	return (tab);
}

int		main(void)
{
	char str[] = "Bonjour les amis de 42";
	char *tab;
	tab = *ft_split_whithespaces(str);
	
	return (0);
}
