
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}


char *ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
    char *dest;
    char *src;
    unsigned int n;

    src = calloc(7, sizeof(char));
    src = "Roberto";
    dest = calloc(7, sizeof(char));
    n = 3;

    ft_strncpy(dest, src, n);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);    
    
    return (0);
}