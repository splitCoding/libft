#include <stdlib.h>

int get_len(const char *src)
{
    int count;

    count = 0;
    while(*src)
    {
        count++;
        src++;
    }
    return (count);
}
char	*ft_strdup(const char *src)
{
	char	*new_src;
	int		src_length;
	int		i;

	src_length = strlen(src);
	new_src = (char *)malloc(src_length + 1 * sizeof(char));
	if (!(new_src))
		return (0);
	i = 0;
	while (src[i])
	{
		new_src[i] = src[i];
		++i;
	}
	new_src[i] = '\0';
	return (new_src);
}