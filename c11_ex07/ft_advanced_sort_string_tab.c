
void		ft_sort_string_arr(char **arr, unsigned int size,
		int (*cmp)(char*, char*))
{
	unsigned int	i;
	unsigned int	max_pos;
	char			*temp;

	max_pos = size;
	while (max_pos > 0)
	{
		i = 0;
		while (++i < max_pos)
		{
			if (cmp(arr[i - 1], arr[i]) > 0)
			{
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
		--max_pos;
	}
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*))
{
	unsigned int size;

	size = 0;
	while (tab[size] != 0)
		++size;
	ft_sort_string_arr(tab, size, cmp);
}


#include <stdio.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*));

void	print_tab_nl(char **tab)
{
	int i;

	i = 0;
	printf("{");
	while (tab[i] != NULL)
		printf("\"%s\", ", tab[i++]);
	printf("NULL} \n");

}

int	ft_strcmp(char *s1, char*s2)
{
	return (strcmp(s1, s2));
}

int	rev_strcmp(char *s1, char*s2)
{
	return (-1 * strcmp(s1, s2));
}

int	main(void)
{
	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
	printf("tab before:     ");
	print_tab_nl(tab0);

	ft_advanced_sort_string_tab(tab0, ft_strcmp);

	printf("tab strcmp:     ");
	print_tab_nl(tab0);

	ft_advanced_sort_string_tab(tab0, rev_strcmp);

	printf("tab rev_strcmp: ");
	print_tab_nl(tab0);
}
