#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*tab;

	if (max > min)
	{
		range = max - min;
		tab = malloc(range * sizeof(int));
		i = 0;
		while (i < range)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (0);
}
