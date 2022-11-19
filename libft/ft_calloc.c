/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:35:57 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:35:58 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buf;

	buf = malloc(n * size);
	if (!buf)
		return (NULL);
	if (buf)
		ft_bzero(buf, n * size);
	return (buf);
}
