/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:42:07 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:42:08 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "myutils.h"

char	*conversion_x(unsigned int nb, int is_upper)
{
	char	*hex;

	hex = my_ith(nb);
	if (!hex)
		return (NULL);
	if (is_upper)
		hex = my_strtoupper(hex);
	return (hex);
}
