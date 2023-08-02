/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 04:12:32 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/31 07:21:35 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (-1);
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}
