/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:42:24 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:42:25 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "myutils.h"

char	*conversion_d(int d)
{
	char	*str;

	str = ft_itoa(d);
	if (!str)
		return (NULL);
	return (str);
}
