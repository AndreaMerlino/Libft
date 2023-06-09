/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:47:50 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/12 16:23:10 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*copia;
	const char	*runner;

	runner = s1;
	copia = malloc(ft_strlen(s1) * sizeof(char));
	if (!copia)
		return (NULL);
	while (*s1)
		*copia++ = *s1++;
	*copia = '\0';
	return (copia - (ft_strlen(runner)));
}
