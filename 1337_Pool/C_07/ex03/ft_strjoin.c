#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_fulllen(int size, char **str, int seplen)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]) + seplen;
		i++;
	}
	len -= seplen;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strlen;
	int		i;
	char	*tab;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	strlen = ft_fulllen(size, strs, ft_strlen(sep));
	tab = malloc((strlen + 1) * sizeof(char));
	if (!tab)
		return (0);
	tab[0] = '\0';
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(tab, sep);
		}
		i++;
	}
	return (tab);
}

/*int        main(void) 
{
         char        *separator; 
         char        *result; 
         int        size; 
		 char **strs;

        size = 3; 
         strs = (char** )malloc(3 * sizeof(char )); 
         strs[0] = (char*)malloc(sizeof(char) * 5 + 1); 
         strs[1] = (char *)malloc(sizeof(char) * 7 + 1); 
         strs[2] = (char *)malloc(sizeof(char) * 14 + 1); 
         strs[0] = "Hello"; 
         strs[1] = "friend,"; 
         strs[2] = "you are awesome"; 
         separator = " "; 
         result = ft_strjoin(size, strs, separator); 
         printf("%s$\n", result); 
         free(result); 
}*/
