#include <unistd.h>

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putchar_base(int nb, char *base)
{
	int	n;

	n = ft_base_len(base);
	if (n > 1 && check(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		ft_putchar(base[nb % n]);
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(147483648, base);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr_base(nb, base);
	}
	else if (nb >= ft_base_len(base))
	{
		ft_putnbr_base(nb / ft_base_len(base), base);
		ft_putnbr_base(nb % ft_base_len(base), base);
	}
	else
		ft_putchar_base(nb, base);
}
