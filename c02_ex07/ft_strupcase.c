
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] > 96 && str[c] < 123)
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}



char *ft_strupcase(char *str);

int        main(void)
{
    char *a;
    char str1[] = "roberto";
    char str2[] = "Roberto";
    char str3[] = "ROBERTO";

    a = ft_strupcase(str1);
    printf("String 'roberto': %s\n", a);
    a = ft_strupcase(str2);
    printf("String 'Roberto': %s\n", a);
    a = ft_strupcase(str3);
    printf("String 'ROBERTO': %s\n", a);
    
}
