/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:41:04 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/25 06:03:08 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	sign(char *str, int j, int nb)
{
	while (str[j] == 43 || str[j] == 45)
	{
		if (str[j] == 45)
			nb *= -1;
		j++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	j;

	nb = 0;
	i = 0;
	j = 0;
	while ((str [i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
		j++;
	}
	while (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	nb = sign(str, j, nb);
	return (nb);
}
