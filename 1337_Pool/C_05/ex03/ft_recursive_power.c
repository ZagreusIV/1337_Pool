#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		n *= ft_recursive_power(n, power - 1);
		return (n);
	}
	return (n);
}
