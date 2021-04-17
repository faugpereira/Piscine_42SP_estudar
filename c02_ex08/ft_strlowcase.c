
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] > 64 && str[c] < 91)
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}



char *ft_strlowcase(char *str);

int        main(void)
{
    char *a;
    char str1[] = "roberto";
    char str2[] = "Roberto";
    char str3[] = "ROBERTO";

    a = ft_strlowcase(str1);
    printf("String 'roberto': %s\n", a);
    a = ft_strlowcase(str2);
    printf("String 'Roberto': %s\n", a);
    a = ft_strlowcase(str3);
    printf("String 'ROBERTO': %s\n", a);
    
}
