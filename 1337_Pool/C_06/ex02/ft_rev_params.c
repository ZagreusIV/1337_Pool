/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:43:41 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/24 21:46:22 by mboudhar         ###   ########.fr       */
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

	while (arc > 1)
	{
		i = 0;
		while (arv[arc - 1][i] != '\0')
		{
			ft_putchar(arv[arc - 1][i]);
			i++;
		}
		ft_putchar('\n');
		arc--;
	}
}
