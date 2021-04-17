
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 65 || d > 90)
		{
			return (0);
		}
		c++;
	}
	return (1);
}




int ft_str_is_uppercase(char *str);

int        main(void)
{
    char *str;
    int a;

    str = "";
    a = ft_str_is_uppercase(str);
    printf("String vazia: %d\n", a);
    str = "ROBERTO";
    a = ft_str_is_uppercase(str);
    printf("String 'ROBERTO': %d\n", a);
    str = "Roberto";
    a = ft_str_is_uppercase(str);
    printf("String 'Roberto': %d\n", a);
    str = "Roberto 0123";
    a = ft_str_is_uppercase(str);
    printf("String 'Roberto 0123': %d\n", a);
    str = "#@$#$&0123";
    a = ft_str_is_uppercase(str);
    printf("String '#@$#$*&$&0123': %d\n", a);
}
