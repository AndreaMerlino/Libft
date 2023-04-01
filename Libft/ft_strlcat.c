
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
		unsigned int i;
		int j;
		
		j = 0;
		i = dstsize - 1;
		if (ft_strlen(dst) < dstsize - 1)
			return(NULL);
		while ( *src )
		{	dst[i] = *src;
			i++;
			src ++;
		}
		dst[i] = '\0';	
		else if (ft_strlen(dst) == dstsize - 1)
			return(ft_strlen(dst) + ft_strlen(src);
		else 
		return (ft_strlen(src) + dstsize - 1);

