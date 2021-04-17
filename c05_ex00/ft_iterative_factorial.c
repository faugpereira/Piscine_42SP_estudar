
int	ft_iterative_factorial(int nb)
{
	int	i;
	int nb_orig;

	nb_orig = nb;
	i = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i < nb_orig)
		{
			nb = nb * (nb_orig - i);
			i++;
		}
	}
	return (nb);
}

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}