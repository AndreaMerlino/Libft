/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:03:47 by amerlino          #+#    #+#             */
/*   Updated: 2023/04/20 15:03:59 by amerlino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word(char const *s, char c)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
	while (s[a] != '\0')
	{
		while (s[a] != c && s[a])
			a++;
		i++;
		while (s[a] == c)
		a++;
	}
	return (i);
}

static char	*copiaparola(char const **s, char c)
{
	int		j;
	int		a;
	char	*copiaparola;

	j = 0;
	a = 0;
	while (*(*s)++ != c)
		j++;
	copiaparola = (char *)malloc(j +1);
	if (!copiaparola)
		return (NULL);
	*s = *s - j - 1;
	while (a < j)
		copiaparola[a++] = *(*s)++;
	copiaparola[a] = 0;
	while (**s == c)
			(*s)++;
	a = 0;
	j = 0;
	return (copiaparola);
}

char	**ft_split(char const *s, char c)
{
	int		parole;
	int		i;
	char	**split;

	i = 0;
	s = ft_strtrim (s, &c);
	parole = word (s, c);
	split = (char **)malloc((parole + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i < parole)
	{
		split[i] = copiaparola(&s, c);
		i++;
	}
	split[i] = 0;
	return (split);
}
