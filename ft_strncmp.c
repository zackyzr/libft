#include "libft.h"
//strncmp is basically comparing s1 and s2 and 
//returning the ascii avlue of that difference
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{	
	char s3[] = "ABC";
	char s4[] = "abc";
	printf("%d\n", ft_strncmp(s3, s4, 2));
	return (0);
}
*/
