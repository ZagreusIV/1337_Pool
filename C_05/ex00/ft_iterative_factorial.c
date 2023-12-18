#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			n *= i;
			i++;
		}
		return (n);
	}
	return (0);
}
