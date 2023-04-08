/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:21:44 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/08 20:21:46 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (!dst && !src)
		return (NULL);
	while (n < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		n++;
	}
	return (dst);
}
