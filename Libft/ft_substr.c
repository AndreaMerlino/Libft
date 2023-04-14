/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:36:57 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/13 12:36:59 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*j;
	int		i;

	i = 0;
	j = (char *) s;
	if (start > ft_strlen(s) || len > ft_strlen(s))
		return (NULL);
	while (*j)
	{
		if (i == start)
		{
			p = malloc((len +1) * sizeof(char));
			if (!p)
				return (NULL);
			i = 0;
			while (i++ < len)
			*p++ = *j++;
			*p = '\0';
			return (p - len);
		}
		j++;
		i++;
	}
	return (NULL);
}
