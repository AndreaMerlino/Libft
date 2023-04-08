/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:24:21 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/05 13:24:23 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h'"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				k;
	unsigned int	j;

		j = ft_strlen(src);
		i = 0;
		k = 0;
	if (dstsize == 0)
		return (ft_strlen(dst));
	while (*src && (k < dstsize -1))
	{
			dst[i] = *src;
			i++;
			src ++;
			k ++;
	}
	dst[i] = '\0';
	return (j);
}
