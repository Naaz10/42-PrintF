/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <nafrin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:36:36 by nafrin            #+#    #+#             */
/*   Updated: 2022/11/19 17:54:00 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
