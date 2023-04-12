/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:37:10 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/12 12:37:12 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		memoria;
	void		*ptr;

	memoria = count * size;
	ptr = malloc(memoria);
	if (!ptr)
		return (NULL);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	while (memoria--)
		((char *)ptr)[memoria] = 0;
	return (ptr);
}
