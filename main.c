



#include "ft_printf.h"
#include <limits.h>

int main()
{
printf("%d\n", ft_printf("Test: %s\n", "Hello"));
printf("%d\n", printf("Test: %s\n", "Hello"));

    return 0;
}

	// int check = ((c == 'c') * 1 + (c == 's') * 2);
	// (c == 'c') && (print_char(va_arg(ap, int), &count), 0);
