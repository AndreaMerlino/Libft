/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:58:49 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/17 15:58:51 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		last;
	char	*j;

	i = 0;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	while (ft_strchr(set, s1[last -1]) != 0)
		last--;
	j = ft_substr(s1, i, last - i);
	return (j);
}
