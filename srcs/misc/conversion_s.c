/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:42:13 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:42:14 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
