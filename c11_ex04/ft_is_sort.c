
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		++i;
	}
	return (1);
}

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	bigger_than(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int main(void)
{
	int tab0[] = {1, 2, 3, 4, 5};
	int tab1[] = {1, 7, 3, 4, 5};

	printf("%i\n", ft_is_sort(tab0, 5, bigger_than));
	printf("%i\n", ft_is_sort(tab1, 5, bigger_than));
}
