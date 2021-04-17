
int	ft_is_prime(int nb)
{
	int i;
	int count;

	count = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb > 5 && (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0))
		return (0);
	else
	{
		i = nb;
		while (i > 1)
		{
			if (nb % i == 0)
				count++;
			if (count > 1)
				return (0);
			i--;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (2);
	}
	else
	{
		if (ft_is_prime(nb))
			return (nb);
		return (ft_find_next_prime(nb + 1));
	}
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_find_next_prime(8));
}
