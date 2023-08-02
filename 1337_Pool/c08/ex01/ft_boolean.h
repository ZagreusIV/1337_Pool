/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:10 by mboudhar          #+#    #+#             */
/*   Updated: 2023/08/01 15:54:12 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOL_H
# define FT_BOOL_H

#include <unistd.h>

typedef int	t_bool;
# define FALSE 0
# define TRUE 1
# define EVEN(nbr) (nbr % 2 == 0)
# define EVEN_MSG "I have an even number of arguments"
# define ODD_MSG "I have an odd number of arguments"
# define SUCCESS 0
#endif
