/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 00:09:15 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/18 03:39:41 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
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
