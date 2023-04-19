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
	
	i = 0;
	j = 0;
	a = 0;
	s = ft_strtrim(s, &c);
	split =( char **)malloc((i + 1) * sizeof(char*));
	parole = word(s,c);
	while(i < parole)
	{
		while(*s++ != c)
			j++;
		split[i] =(char*)malloc(j +1);
		s = s - j - 1;
		while (a < j)	
			split[i][a++] = *s++;
		split[i][a] = 0;
		while(*s == c)
			s++;
	a = 0;
		j = 0;
		i++;
	}
	split[i] = 0;
	return (split);
}
			
int main()
{ 
int i = 0;
	char stringa[] ="aajjjjjaakkkaooaaappaa";
	char c  = 'a';
	char **stampa = ft_split(stringa, c);
	while (i < 4)
	{	
	printf("%s\n",stampa[i]);
	i++;
	}

	return(0);
}
