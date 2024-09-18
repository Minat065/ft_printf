/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:30:52 by mirokugo          #+#    #+#             */
/*   Updated: 2024/07/01 22:54:36 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./srcs/libft.h"
# include <stdarg.h>

void	ft_putnbr_base(unsigned int n, char *base, int *count_char);
int		ft_printf(const char *format, ...);
int     ft_printf(const char *format, ...);

#endif
