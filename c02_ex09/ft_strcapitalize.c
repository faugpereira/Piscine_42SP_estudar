
#include <stdio.h>

int		ft_is_an(int a)
{
	if ((a > 47 && a < 58)
	|| (a > 64 && a < 91)
	|| (a > 96 && a < 123))
	{
		return (1);
	}
	return (0);
}

int		ft_is_lt(int b)
{
	if ((b > 64 && b < 91) || (b > 96 && b < 123))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((c == 0) || (ft_is_lt(str[c]) == 1 && ft_is_an(str[c - 1]) == 0))
		{
			if (str[c] > 96 && str[c] < 123)
			{
				str[c] = str[c] - 32;
			}
		}
		else if (str[c] > 64 && str[c] < 91)
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}



char *ft_strcapitalize(char *str);

int        main(void)
{
    char *a;
    char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; CINQUENTA+e+um";

    a = ft_strcapitalize(str1);
    printf("Original: oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um\n");
    printf("Após a função: %s\n", a);

}
