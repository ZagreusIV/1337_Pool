/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:55:48 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/25 21:56:10 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int arc, char **arv)
{
	int	j;
	int	x;
	int	y;

	j = 1;
	x = 1;
	while (x < arc - 1)
	{
		y = 1;
		while (y < arc - 1)
		{
			if (ft_strcmp(arv[y], arv[y + 1]) > 0)
				swap(&arv[y], &arv[y + 1]);
			y++;
		}
		x++;
	}
	while (j < arc)
	{
		ft_putstr(arv[j]);
		ft_putchar('\n');
		j++;
	}
}
