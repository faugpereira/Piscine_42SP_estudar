
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 97 || d > 122)
		{
			return (0);
		}
		c++;
	}
	return (1);
}



int ft_str_is_lowercase(char *str);

int        main(void)
{
    char *str;
    int a;

    str = "";
    a = ft_str_is_lowercase(str);
    printf("String vazia: %d\n", a);
    str = "roberto";
    a = ft_str_is_lowercase(str);
    printf("String 'roberto': %d\n", a);
    str = "Roberto";
    a = ft_str_is_lowercase(str);
    printf("String 'Roberto': %d\n", a);
    str = "Roberto 0123";
    a = ft_str_is_lowercase(str);
    printf("String 'Roberto 0123': %d\n", a);
    str = "#@$#$&0123";
    a = ft_str_is_lowercase(str);
    printf("String '#@$#$*&$&0123': %d\n", a);
}
