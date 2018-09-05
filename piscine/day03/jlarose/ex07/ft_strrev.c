/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:41:38 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/05 12:01:26 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	tmp;

	i = 0;
	length = 0;
	while (str[length] != '\0')
		length++;
	length--;
	while (i < length)
	{
		tmp = str[i];
		str[i] = str[length];
		str[length] = tmp;
		i++;
		length--;
	}
	return (str);
}
