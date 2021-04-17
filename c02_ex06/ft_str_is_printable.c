
#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 32 || d > 126)
		{
			return (0);
		}
		c++;
	}
	return (1);
}



int ft_str_is_printable(char *str);

int        main(void)
{
    char *str;
    int a;

    str = "";
    a = ft_str_is_printable(str);
    printf("String vazia: %d\n", a);
    str = "Roberto";
    a = ft_str_is_printable(str);
    printf("String 'Roberto': %d\n", a);
    str = "#@$#$&0123";
    a = ft_str_is_printable(str);
    printf("String '#@$#$*&$&0123': %d\n", a);
    str = "áéíóú";
    a = ft_str_is_printable(str);
    printf("String 'áéíóú': %d\n", a);
    str = "ÇüéâäàåçêëèïîìÄÅÉæÆôöòûùÿÖÜø£Ø×ƒáíóúñÑªº¿®¬½¼¡«»";
    a = ft_str_is_printable(str);
    printf("String 'ÇüéâäàåçêëèïîìÄÅÉæÆôöòûùÿÖÜø£Ø×ƒáíóúñÑªº¿®¬½¼¡«»': %d\n", a);
}
