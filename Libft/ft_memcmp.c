/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:36:04 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/11 14:36:07 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*p;
	unsigned char	*j;

	p = (unsigned char *)s1;
	j = (unsigned char *)s2;
	i = 0;
	while (*p && *j && i < n)
	{
		if (*p != *j)
			return (*p - *j);
		i++;
		p++;
		j++;
	}
	return (0);
}
