#include <stddef.h>

size_t	my_memsize(void *ptr)
{
	char	*str;
	size_t	n;

	n = 0;
	str = (char *) ptr;
	while (*str++)
		n++;
	return (n);
}
