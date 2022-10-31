#include "ft_printf.h"
#include "libft.h"
#include "myutils.h"

char	*conversion_s(char *s)
{
	char	*str;

	if (s)
		str = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	else
		str = ft_calloc(sizeof(char), S_EMPTY_L + 1);
	if (!str)
		return (NULL);
	if (s)
		str = ft_memcpy(str, s, ft_strlen(s));
	else
		str = ft_memcpy(str, S_EMPTY, S_EMPTY_L);
	return (str);
}
