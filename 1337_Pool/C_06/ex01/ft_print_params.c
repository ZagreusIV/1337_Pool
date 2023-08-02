/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:35:07 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/24 21:43:10 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	j = 1;
	while (j < arc)
	{
		i = 0;
		while (arv[j][i] != '\0')
		{
			ft_putchar(arv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
