/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:37:29 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:37:30 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "myutils.h"

void	*my_realloc(void *ptr, size_t size)
{
	void	*new;
	size_t	msize;

	msize = my_memsize(ptr);
	if (size <= msize)
		return (ptr);
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	ft_bzero(new, size);
	if (!ptr)
		return (new);
	ft_memcpy(new, ptr, msize);
	free(ptr);
	ptr = NULL;
	return (new);
}
