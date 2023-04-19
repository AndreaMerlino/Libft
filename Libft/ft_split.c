#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
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


static int word(char const *s, char c)
{
	char	*j;
	int		i;
	int		a;

	a = 0;
	i = 0;
	j = ft_strtrim(s,&c);
	while(j[a] != '\0')
	{
		while(j[a] != c && j[a])
			a++;
		i++;
		while(j[a] == c)
		a++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	int parole;
	int i;
	int j;
	int a;
	char **split;

	split = ((char**)malloc(i + 1) * sizeof(char*));
	parole = word(s,c);
	while(parole < i)
	{
		while(*s++ != c)
			j++;
		split[i] =(char*)malloc(j +1);
		*s - j;
		while (a <= j)	
			split[i][a++] = *s++;
		while(*s++ != 
		







}	
int main()
{ 
	char stringa[] ="aajjjjjaakkkaooaaappaa";
	char  = 'a';
	printf("%d\n", ft_split(stringa, c));
	return(0);
}
