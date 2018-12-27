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
extern int ft_isalpha(int c);

extern void ft_bzero(char *str, size_t n);

int main(void)
{
	char *letters = "abcdefghijklmnopqrstuvwxyz";
	char *digits = "123456789";
	char *special = ";<,.?>=)(!@#$%(*&^%#{}||<`+-__*";

	printf("test for isalpha ... \n");
	for (int i = 0; i < 26; i++) {
		printf("%c == %d\n", letters[i], ft_isalpha(letters[i]));
	}

	printf("test for isalpha ... pass digits\n");

	for (int i = 0; i < 9; i++) {
		printf("%c == %d\n", digits[i], ft_isalpha(digits[i]));
	}
	printf("test for isalpha ... pass special chars\n");
	for (int i = 0; i < 31; i++) 
		printf("%c == %d\n", special[i], ft_isalpha(special[i]));

/*	char array[10] = {'a', 'b', 'c'};	
	ft_bzero(array, strlen(array));
	printf("clear === %s\n", array); 
*/
	char array1[20] = "hello";
	char *array2 = "pool";

//	ft_strcat(array1, array2);
	
	printf("%d\n", ft_isalpha('A'));

	return 0;
}

