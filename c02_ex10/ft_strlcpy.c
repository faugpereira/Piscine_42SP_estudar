
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
	{
		srcsize++;
	}
	if (size > 0)
	{
		c = 0;
		while (c < (size - 1) && src[c] != '\0')
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (srcsize);
}



unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int                main(void)
{
    char dest[20];
    char *src = "Roberto";
    unsigned int n = 5;

    ft_strlcpy(dest, src, n);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
}
