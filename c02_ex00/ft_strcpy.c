
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}



char *ft_strcpy(char *dest, char *src);

int        main(void)
{
    char *dest;
    char *src;

    src = calloc(7, sizeof(char));
    src = "Roberto";
    dest = calloc(7, sizeof(char));
    ft_strcpy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);    
    
    return (0);
}