#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = 0;
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (1);
	n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
