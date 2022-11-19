/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:36:31 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:36:32 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
