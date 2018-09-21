/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:04:36 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/20 19:50:07 by jlarose          ###   ########.fr       */
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

void	countword(char *str, int *word)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
    	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    	{
        	*word += 1;
      		 str[i] = '\0';
       		 i++;
    	}
    	i++;
	}
	j = 0;
}

char *delspace(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != 32)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

void    ft_print_words_tables(char **tab)
{
    int i = 0;
    while (tab[i] != '\0')
    {
        printf("%s\n", tab[i]);
        i++;
    }
}

char    **ft_split_whitespaces(char *str)
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
    i = 0;
    while (i <= word)
    {
        tab[i] = (char*)malloc(sizeof(str) * ft_strlen(str));
        tab[i] = str;
        while (*str)
            str++;
        str++;
        i++;
    }
    tab[i] = (char*)malloc((sizeof(char*) * 1));
    tab[i] = "\0";
    return (tab);
}

int        main(int argc, char **argv)
{
    char *str;
    char **tab;
    
    str = strdup("  Bonjour   les    amis de 42");
    tab = ft_split_whitespaces(str);
  	ft_print_words_tables(tab);
  	return (0);
}
