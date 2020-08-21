#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs[12] = {
		"abc",
		"ddd",
		"def",
		"",
		"ghi",
		"789",
		"AABBCCDDAABBCCDD"
	};
	char sep[] = "+";	
	char *result = ft_strjoin(7, strs, sep);	

	printf("%p\n%s\n", result, result);
	return 0;
}
