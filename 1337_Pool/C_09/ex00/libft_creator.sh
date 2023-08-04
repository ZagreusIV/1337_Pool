# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaborak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 01:25:28 by yaborak           #+#    #+#              #
#    Updated: 2023/08/04 01:25:33 by yaborak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
