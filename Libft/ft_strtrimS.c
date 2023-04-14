#include <stdio.h>
#include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int runner;
	char *p;

    runner = ft_strlen(set);
	p = malloc((ft_strlen(s1) - runner) * sizeof(char));
	i = 0;
	while (*s1)
	{
		p[i] = *s1;
		while (*set)
		{
			if (*s1 == *set)
			p[i] = 48;
			set++;
		}
	if (p[i] == 48)
		s1++;

	else 
	{	s1++;
		i++;
	}

		set = set - runner;
	}
		p[i] ='\0';
		return (p);
		}
int main()
{
	char a[] = "oaieri sera sono andato al mare";
	char b[] = "er";
	printf("%s\n", ft_strtrim(a,b));
	return(0);
}

		


