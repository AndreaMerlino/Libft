#include <string.h>
#include <stdio.h>
int main ()
{
	char a[] = "iic";
	char b[] = "ikjjjumjurt";
	printf("%lu\n", strlcat(a, b, 4));
	return(0);
}
