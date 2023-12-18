#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(int n)
{
	char	*h;

	h = "0123456789abcdef";
	write(1, &h[n / 16], 1);
	write(1, &h[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_putchar('\\');
			hex((unsigned char)str[i]);
		}
		i++;
	}
}
