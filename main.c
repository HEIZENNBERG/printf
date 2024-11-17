



#include "ft_printf.h"
#include <limits.h>

int main()
{
    printf("%d\n", ft_printf("%s", "some string with %s hehe"));
    printf("%d", printf("%s", "some string with %s hehe"));
    return 0;
}

	// int check = ((c == 'c') * 1 + (c == 's') * 2);
	// (c == 'c') && (print_char(va_arg(ap, int), &count), 0);