/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:37:34 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:37:35 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "myutils.h"

char	*my_strrev(char *str)
{
	char	c;
	int		i;
	int		n;

	if (!str)
		return (str);
	i = 0;
	n = ft_strlen(str);
	while (i < n / 2)
	{
		c = str[n - i - 1];
		str[n - i - 1] = str[i];
		str[i] = c;
		i++;
	}
	return (str);
}
