/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:20:33 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/05 12:20:37 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h'"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				k;

		i = ft_strlen(dst);
		k = 0;
	if (dstsize == 0)
	{
			dst[i -1] = '\0';
		return (i - 1);
	}
	while (*src && (k < dstsize -1))
	{
			dst[i] = *src;
			i++;
			src ++;
			k ++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}
