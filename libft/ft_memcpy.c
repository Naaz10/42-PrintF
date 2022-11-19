/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:36:11 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:36:12 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
