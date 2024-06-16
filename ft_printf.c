
#include "ft_printf.h"

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
    }
    else
      ft_putchar_fd(*format, 1);
    format++;
  }
  va_end(ap);
  return (0);
}

int main()
{
  ft_printf("Hello, %s! %d + %d = %d\n", "world", 1, 2, 3);
  return (0);
}
