/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:28:49 by mboudhar          #+#    #+#             */
/*   Updated: 2023/07/18 14:36:09 by mboudhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	lowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int	ft_str_is_alphanum(char *c)
{
	if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
		return (1);
	if (*c >= '0' && *c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			upcase(&str[i]);
		else if (ft_str_is_alphanum(&str[i - 1]) != 1)
			upcase(&str[i]);
		if (ft_str_is_alphanum(&str[i - 1]) != 0)
			lowcase(&str[i]);
		i++;
	}
	return (str);
}
