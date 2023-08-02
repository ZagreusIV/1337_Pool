/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:30:34 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/24 21:10:36 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = 0;
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (1);
	n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
