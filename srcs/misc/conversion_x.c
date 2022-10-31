#include "libft.h"
#include "myutils.h"

char	*conversion_x(unsigned int nb, int is_upper)
{
	char	*hex;

	hex = my_ith(nb);
	if (!hex)
		return (NULL);
	if (is_upper)
		hex = my_strtoupper(hex);
	return (hex);
}
