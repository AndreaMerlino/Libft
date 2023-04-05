/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:34:26 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/05 22:34:30 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!needle)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		while (needle[j] == haystack[i] && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) &haystack[i - (ft_strlen(needle) - 1)]);
			j ++;
			i++;
		}
		i ++;
	}
}
