#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*buf;
	char			*temp;

	i = 0;
	buf = (char *) dest;
	temp = (char *) src;
	while (i < n)
	{
		*buf++ = *temp++;
		i++;
	}
	return (dest);
}
