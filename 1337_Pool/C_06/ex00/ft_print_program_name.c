#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[0][i] != '\0' && arc > 0)
	{
		ft_putchar(arv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
