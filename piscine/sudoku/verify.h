/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:18:54 by jlarose           #+#    #+#             */
/*   Updated: 2018/09/09 22:04:32 by jlarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIFY_H
# define VERIFY_H

# include "verify.h"

int		v_line(int nb, int pos, int grid[9][9]);

int		v_column(int nb, int pos, int grid[9][9]);

int		v_squar(int nb, int pos, int grid[9][9]);
#endif
