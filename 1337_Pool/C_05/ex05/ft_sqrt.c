#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (nb == (i * i))
			return (i);
		i++;
	}
	return (0);
}
