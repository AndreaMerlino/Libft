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
	int last;
	char *p;

	last = ft_strlen(set);
    runner = ft_strlen(s1);
	p = malloc(runner * sizeof(char));
	i = 0;
			if ((s1[i] == set[i]) || (s1[runner - (last - i)] == set[i])) 
			{
				while ((s1[i] == set[i]) || (s1[runner - (last  - i)] == set[i]))
						{
							if (set[i + 1] == '\0')
							{
								free(p);
								p = malloc((runner - last) * sizeof(char));
								while(s1[i])
								{
									if ((s1[0] == set[0]) && ((s1[ runner - last ]) == set[0]))
									{
										if(*p < s1[ runner - last])
											*p++ = s1[i++];
									}
									 if (s1[0] == set[0])
										*p++ = s1[i++];
									else if ((s1[ runner - last]) == set[0])
										if(*p < s1[ runner - last])
											*p++ = s1[i++];
								}
							}
							i++;
						}
			}
			return (p - (runner - last)); 
}
int main()
{
	char a[] = "oaieri sera sono andatoa";
	char b[] = "oa";
	printf("%s\n", ft_strtrim(a,b));
	return(0);
}
