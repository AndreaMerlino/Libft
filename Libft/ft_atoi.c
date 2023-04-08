/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:52:44 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/08 15:37:57 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result(const char *str)
{
	int	r;
	int	k;

	k = 1;
	r = 0;
	if (*str == '-')
		k = -1;
	if (*str == '-' || *str == '+')
			str++;
	while (ft_isdigit((char)*str))
	{
		r = r * 10 + *str - 48;
		str++;
	}
	return (r * k);
}

int	ft_atoi(const char *str)
{
	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else if ((*str == '-' && ft_isdigit(*(str + 1)))
			|| (*str == '+' && ft_isdigit(*(str + 1))))
			return (result(str));
		else if (ft_isdigit((char)*str))
			return (result(str));
		else
			return (0);
	}
	return (0);
}
