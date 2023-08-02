/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:19:48 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/31 04:07:08 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*tab;

	if (max > min)
	{
		range = max - min;
		tab = malloc(range * sizeof(int));
		i = 0;
		while (i < range)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (0);
}
