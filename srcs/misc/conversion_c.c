#include "libft.h"

char	*conversion_c(char c)
{
	char	*str;

	
	str = ft_calloc(sizeof(char), 2);
	if (!str)
		return (NULL);
	str[0] = c;
	return (str);
}
