/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:31:59 by mirokugo          #+#    #+#             */
/*   Updated: 2024/06/23 18:21:00 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int n, char *base, int *count_char)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1, count_char);
		n = -n;
	}
	if (n >= ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base, count_char);
	ft_putchar_fd(base[n % ft_strlen(base)], 1, count_char);
}

void	ptr_to_hex(void *ptr, char *buffer)
{
	unsigned long	addr;
	char			temp[sizeof(void *) * 2 + 1];
	int				digit;
	int				i;
	int				start;

	i = 0;
	start = 0;
	addr = (unsigned long)ptr;
	while (i < (int)sizeof(void *) * 2)
	{
		digit = (addr >> ((sizeof(void *) * 2 - 1 - i) * 4)) & 0xf;
		if (digit < 10)
			temp[i] = '0' + digit;
		else
			temp[i] = 'a' + digit - 10;
		i++;
	}
	temp[i] = '\0';
	while (temp[start] == '0' && start < (int)sizeof(void *) * 2 - 1)
		start++;
	strlcpy(buffer, temp + start, sizeof(void *) * 2 - start + 1);
}

void	ft_exist_formt(const char *format, va_list ap, int *count_char)
{
	char	buffer[16];

	if (*format == 'd')
		ft_putnbr_fd(va_arg(ap, int), 1, count_char);
	else if (*format == 's')
		ft_putstr_fd(va_arg(ap, char *), 1, count_char);
	else if (*format == 'c')
		ft_putchar_fd(va_arg(ap, int), 1, count_char);
	else if (*format == '%')
		ft_putchar_fd('%', 1, count_char);
	else if (*format == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef",
			count_char);
	else if (*format == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF",
			count_char);
	else if (*format == 'p')
	{
		ft_putstr_fd("0x", 1, count_char);
		ptr_to_hex(va_arg(ap, void *), buffer);
		ft_putstr_fd(buffer, 1, count_char);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count_char;

	va_start(ap, format);
	count_char = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_exist_formt(format, ap, &count_char);
		}
		else
			ft_putchar_fd(*format, 1, &count_char);
		format++;
	}
	va_end(ap);
	return (count_char);
}

// int	main(void)
// {
// 	printf("test1\n");
// 	printf("printf: %d\n", printf("printf: %d\n", 42));
// 	printf("ft_printf: %d\n", ft_printf("ft_printf: %d\n", 42));
// 	return (0);
// }
