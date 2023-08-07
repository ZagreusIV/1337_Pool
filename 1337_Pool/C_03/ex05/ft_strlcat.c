unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ns;
	unsigned int	nd;

	ns = ft_strlen(src);
	nd = ft_strlen(dest);
	i = 0;
	if (size - 1 < nd || size == 0)
		return (ns + size);
	while (src[i] != '\0' && (nd + i) < size - 1)
	{
		dest[nd + i] = src[i];
		i++;
	}
	dest[nd + i] = '\0';
	return (nd + ns);
}
