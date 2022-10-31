#include "libft.h"

int	my_printlen(char *str)
{
	int		n;

	n = ft_strlen(str);
	if (n == 0)
		return (1);
	else
		return (n);
}
