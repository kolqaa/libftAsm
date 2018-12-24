#include <stdio.h>
#include <string.h>

extern char *ft_strcat(char *dest, const char *src);
/*{
	int i;
	int dst_len = strlen(dest);
	
	for (i = 0; src[i]; i++, dst_len++)
		dest[dst_len] = src[i];
	dest[dst_len] = '\0';
	return dest;
}*/

extern void ft_bzero(char *str, size_t n);

int main(void)
{
/*	char array[10] = {'a', 'b', 'c'};	
	ft_bzero(array, strlen(array));
	printf("clear === %s\n", array); 
*/
	char array1[20] = "hello";
	char *array2 = "pool";

	ft_strcat(array1, array2);
	
	printf("%s\n", array1);

	return 0;
}

