#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src)
	{
		dest[n] = src[n];
		n++;
	}
	return(dest);
}

int	main()
{
	char *str1 = "I like chocolate icecream";
	char *str2 = "I like chocolate";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strncpy(&str1, &str2, 17);
	printf("\nstr1: %s\n", str1);
	printf("str2: %s\n", str2);
	return(0);
}

