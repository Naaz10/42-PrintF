#include "libft.h"
#include "myutils.h"

char	*conversion_d(int d)
{
	char	*str;

	str = ft_itoa(d);
	if (!str)
		return (NULL);
	return (str);
}
