/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:16:51 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 17:39:50 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(void);



int		match(char *s1, char *s2)
{
	if (*s2 == '*' && *s1 != '\0') 
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	
	return (0);
}

int		nmatch(char *s1, char *s2)
{
	int nb;

	nb = 0;
	nb = match(s1, s2);
	return (nb);
}
