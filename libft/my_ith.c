/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ith.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:37:20 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:37:21 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myutils.h"
#include "libft.h"

static int	baselen(size_t nb);

// Convert int to hex
char	*my_ith(size_t nb)
{
	char	*base;
	char	*str;
	int		i;

	base = "0123456789abcdef";
	str = ft_calloc(sizeof(char), baselen(nb) + 1);
	if (!str)
		return (NULL);
	str[0] = '0';
	i = 0;
	while (nb > 0)
	{
		str[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	my_strrev(str);
	return (str);
}

static int	baselen(size_t nb)
{
	int		i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}
