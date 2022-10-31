#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*str1 - *str2 != 0)
			return ((unsigned char) *str1 - (unsigned char) *str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}
