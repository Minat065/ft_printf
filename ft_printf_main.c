
#include "ft_printf.h"

int	main(void)
{
	int return_value_printf;
	int return_value_ft_printf;

	printf("Test 1 (about 'd')\n");
	return_value_printf = printf("printf: %d\n", 42);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", 42);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-1 MAX_INT\n");
	return_value_printf = printf("printf: %d\n", INT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", INT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-2 MIN_INT\n");
	return_value_printf = printf("printf: %d\n", INT_MIN);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", INT_MIN);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-3 0\n");
	return_value_printf = printf("printf: %d\n", 0);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", 0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-4 null_check\n");
	return_value_printf = printf("printf: %d\n", (int)(__intptr_t)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", (int)(__intptr_t)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-5 multiple_digits\n");
	return_value_printf = printf("printf: %d\n", 123456789);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", 123456789);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-6 negative\n");
	return_value_printf = printf("printf: %d\n", -42);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", -42);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 1-7 negative MAX_INT\n");
	return_value_printf = printf("printf: %d\n", -INT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", -INT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	// printf("%d\n", --1);
	// printf("Test 1-8 negative MIN_INT\n");
	// return_value_printf = printf("printf: %d\n", -1*INT_MIN);
	// return_value_ft_printf = ft_printf("ft_printf: %d\n", -1*INT_MIN);
	// printf("return_value_printf: %d\n", return_value_printf);
	// printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	// printf("\n");

	printf("Test 1-9 negative 0\n");
	return_value_printf = printf("printf: %d\n", -0);
	return_value_ft_printf = ft_printf("ft_printf: %d\n", -0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 2 (about 'i')\n");
	return_value_printf = printf("printf: %i\n", 42);
	return_value_ft_printf = ft_printf("ft_printf: %i\n", 42);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf -3);
	printf("\n");

	printf("Test 3 (about 's')\n");
	return_value_printf = printf("printf: %s\n", "42");
	return_value_ft_printf = ft_printf("ft_printf: %s\n", "42");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	// printf("Test3-1 null_check\n");
	// return_value_printf = printf("printf: %s\n", (char *)NULL);
	// return_value_ft_printf = ft_printf("ft_printf: %s\n", (char *)NULL);
	// printf("return_value_printf: %d\n", return_value_printf);
	// printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	// printf("\n");

	printf("Test 3-2 empty_string\n");
	return_value_printf = printf("printf: %s\n", "");
	return_value_ft_printf = ft_printf("ft_printf: %s\n", "");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 3-3 long_string\n");
	return_value_printf = printf("printf: %s\n", "congratulations! you passed the test!");
	return_value_ft_printf = ft_printf("ft_printf: %s\n", "congratulations! you passed the test!");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 4 (about 'c')\n");
	return_value_printf = printf("printf: %c\n", '4');
	return_value_ft_printf = ft_printf("ft_printf: %c\n", '4');
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 4-1 null_check\n");
	return_value_printf = printf("printf: %c\n", (char)(__intptr_t)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %c\n", (char)(__intptr_t)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 4-2 ""\n");
	return_value_printf = printf("printf: %c\n", '\0');
	return_value_ft_printf = ft_printf("ft_printf: %c\n", '\0');
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 4-3 string\n");
	return_value_printf = printf("printf: %c\n", "string test"[0]);
	return_value_ft_printf = ft_printf("ft_printf: %c\n", "string test"[0]);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 5 (about '%%')\n");
	return_value_printf = printf("printf: %%\n");
	return_value_ft_printf = ft_printf("ft_printf: %%\n");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6 (about 'u')\n");
	return_value_printf = printf("printf: %u\n", 4);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", 4);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-1 0\n");
	return_value_printf = printf("printf: %u\n", 0);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", 0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-2 multiple_digits\n");
	return_value_printf = printf("printf: %u\n", 123456789);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", 123456789);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-3 null_check\n");
	return_value_printf = printf("printf: %u\n", 
	(unsigned int)(__intptr_t)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", 
	(unsigned int)(__intptr_t)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-4 MAX_INT\n");
	return_value_printf = printf("printf: %u\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-5 MIN_INT\n");
	return_value_printf = printf("printf: %u\n", 0);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", 0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-6 UINT_MAX\n");
	return_value_printf = printf("printf: %u\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 6-7 UINT_MAX + 1\n");
	return_value_printf = printf("printf: %u\n", UINT_MAX + 1);
	return_value_ft_printf = ft_printf("ft_printf: %u\n", UINT_MAX + 1);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7 (about 'x')\n");
	return_value_printf = printf("printf: %x\n", 42);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", 42);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-1 only_one_digit\n");
	return_value_printf = printf("printf: %x\n", 1);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", 1);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-2 multiple_digits\n");
	return_value_printf = printf("printf: %x\n", 123456789);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", 123456789);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-3 null_check\n");
	return_value_printf = printf("printf: %x\n", 
	(unsigned int)(__intptr_t)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", 
	(unsigned int)(__intptr_t)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-4 MAX_INT\n");
	return_value_printf = printf("printf: %x\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-5 MIN_INT\n");
	return_value_printf = printf("printf: %x\n", 0);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", 0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-6 UINT_MAX\n");
	return_value_printf = printf("printf: %x\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 7-7 UINT_MAX + 1\n");
	return_value_printf = printf("printf: %x\n", UINT_MAX + 1);
	return_value_ft_printf = ft_printf("ft_printf: %x\n", UINT_MAX + 1);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8 (about 'X')\n");
	return_value_printf = printf("printf: %X\n", 42);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", 42);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-1 only_one_digit\n");
	return_value_printf = printf("printf: %X\n", 1);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", 1);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-2 multiple_digits\n");
	return_value_printf = printf("printf: %X\n", 123456789);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", 123456789);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-3 null_check\n");
	return_value_printf = printf("printf: %X\n", 
	(unsigned int)(__intptr_t)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", 
	(unsigned int)(__intptr_t)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-4 MAX_INT\n");
	return_value_printf = printf("printf: %X\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-5 MIN_INT\n");
	return_value_printf = printf("printf: %X\n", 0);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", 0);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-6 UINT_MAX\n");
	return_value_printf = printf("printf: %X\n", UINT_MAX);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", UINT_MAX);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 8-7 UINT_MAX + 1\n");
	return_value_printf = printf("printf: %X\n", UINT_MAX + 1);
	return_value_ft_printf = ft_printf("ft_printf: %X\n", UINT_MAX + 1);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 9 (about 'p')\n");
	return_value_printf = printf("printf: %p\n", &return_value_printf);
	return_value_ft_printf = ft_printf("ft_printf: %p\n", &return_value_printf);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 9-1 null_check\n");
	return_value_printf = printf("printf: %p\n", (void *)NULL);
	return_value_ft_printf = ft_printf("ft_printf: %p\n", (void *)NULL);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 9-2 empty_string\n");
	return_value_printf = printf("printf: %p\n", "");
	return_value_ft_printf = ft_printf("ft_printf: %p\n", "");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 9-3 long_string\n");
	return_value_printf = printf("printf: %p\n", 
	"congratulations! you passed the test!");
	return_value_ft_printf = ft_printf("ft_printf: %p\n", 
	"congratulations! you passed the test!");
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);
	printf("\n");

	printf("Test 10 (all pattern is mixed)\n");
	return_value_printf = printf("printf: %d %i %s %c %%%u %x %X %p\n", 42, 42, "42tokyo", '4', 42, 42, 42, &return_value_printf);
	return_value_ft_printf = ft_printf("ft_printf: %d %i %s %c %%%u %x %X %p\n", 42, 42, "42tokyo", '4', 42, 42, 42, &return_value_ft_printf);
	printf("return_value_printf: %d\n", return_value_printf);
	printf("return_value_ft_printf: %d\n", return_value_ft_printf - 3);

	printf("%d\n", -INT_MAX);

	return (0);
}

// cc -Wall -Wextra -Werror ft_printf.c ft_printf_main.c libftprintf.a -o ft_printf_main