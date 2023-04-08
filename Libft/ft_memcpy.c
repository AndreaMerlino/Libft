/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:33:08 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/08 17:33:11 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*p;
	char	*z;

	p = (char *) src;
	z = (char *) dst;
	i = 0;
	if (!*p && !*z)
		return (NULL);
	while (*p && i < n)
	{
		*z++ = *p++;
		i++;
	}
	return (z);
}
