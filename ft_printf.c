/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:31:59 by mirokugo          #+#    #+#             */
/*   Updated: 2024/06/21 20:31:23 by mirokugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int n, char *base)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n >= ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
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
		temp[i] = digit < 10 ? '0' + digit : 'a' + digit - 10;
		i++;
	}
	temp[i] = '\0';
	while (temp[start] == '0' && start < (int)sizeof(void *) * 2 - 1)
	{
		start++;
	}
	strlcpy(buffer, temp + start, sizeof(void *) * 2 - start + 1);
}

void	ft_exist_formt(const char *format, va_list ap)
{
	char	buffer[16];

	if (*format == 'd')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (*format == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (*format == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (*format == '%')
		ft_putchar_fd('%', 1);
	else if (*format == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (*format == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (*format == 'p')
	{
		ft_putstr_fd("0x", 1);
		ptr_to_hex(va_arg(ap, void *), buffer);
		ft_putstr_fd(buffer, 1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		return_value;

	va_start(ap, format);
	return_value = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_exist_formt(format, ap);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
		return_value++;
	}
	va_end(ap);
	return (return_value);
}

// int	main(void)
// {
// 	printf("test1\n");
// 	ft_printf("%c\n", 'a');
// 	printf("%c\n", 'a');
// 	printf("test2\n");
// 	ft_printf("%s\n", "test");
// 	printf("%s\n", "test");
// 	printf("test3\n");
// 	ft_printf("%d\n", 42);
// 	printf("%d\n", 42);
// 	printf("test4\n");
// 	ft_printf("%x\n", 42);
// 	printf("%x\n", 42);
// 	printf("test5\n");
// 	ft_printf("%X\n", 42);
// 	printf("%X\n", 42);
// 	printf("test6\n");
// 	ft_printf("%p\n", "test");
// 	printf("%p\n", "test");
// 	printf("test7\n");
// 	ft_printf("%%\n");
// 	printf("%%\n");
// 	return (0);
// }
