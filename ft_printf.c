
#include "ft_printf.h"

void ft_putnbr_base(int n, char *base)
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

int ft_printf(const char *format, ...)
{
  va_list ap;

  va_start(ap, format);
  while (*format)
  {
    if (*format == '%')
    {
      format++;
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
        ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
      }
    }
    else
      ft_putchar_fd(*format, 1);
    format++;
  }
  va_end(ap);
  return (0);
}

// int main()
// {
//   ft_printf("Hello, %s! %d %c %x %X %p\n", "world", 42, 'a', 42, 42, 42);
//   return (0);
// }
