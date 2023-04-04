#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	m;
	

	
	m = 0;
	while (s[m] != '\0')
		m++;
	return (m);
}
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
		unsigned int i;
		unsigned int j;
		unsigned int p;
		int 		k;
		
		p = ft_strlen(src);
		i = ft_strlen(dst) ;
		j = i;
		k = 0;	
		/*	if (j < dstsize - 1)
				return(NULL);
			else if (j == dstsize - 1)
			{
				while ( *src )
			{	
			dst[k] = *src;
			i ++;
			src ++;
				}
			dst[i] = '\0';	
			return(j + dstsize);
					}
		else 
		
		{ */
			
		while ( *src && (k < dstsize -1 ) )
		{
			dst[i] = *src;
			i++;
			src ++;
			k ++;
			}
			dst[i] = '\0';	
		return (j + dstsize);// (j + k );
		}
	//	}
		int main ()
		{
		char a[] = "mamma";
		char b[] = "cane";
		printf("la lunghezza della stringa dst e': %zu\n", ft_strlen(a));
		printf("la stringa dst e': %s\n", a);
	printf("LA funzione ft_strlcat da risultato: %lu\n", ft_strlcat(a, b, 4));
// printf("La funzione strlcat da risultato : %lu\n", strlcat(a, b, 4));
		printf("La LUnghezza della stringa dst ora e'%zu\n", ft_strlen(a));
		printf("La stringa dst ora e'%s\n", a);
return(0);
		}


