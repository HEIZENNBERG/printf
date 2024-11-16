



#include "ft_printf.h"
#include <limits.h>

int main()
{
    ft_printf("%p\n", (void *)-5168);
    printf("%p" ,(void *)-5168);

    return 0;
}

	// int check = ((c == 'c') * 1 + (c == 's') * 2);
	// (c == 'c') && (print_char(va_arg(ap, int), &count), 0);