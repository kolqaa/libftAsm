#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "inc/libfta.h"


#define PRINT_TEST(x) ({ \
	 printf("------test for "x" ...--------\n\n"); \
})

static void ft_bzero_test(void)
{
	PRINT_TEST("FT_BZERO");
	char array[10] = {'a', 'b', 'c'};
	printf("array == %s\n", array);	
	ft_bzero(array, strlen(array));
	printf("after bzero array === %s\n\n", array); 
}

static void ft_strcat_test(void)
{
	PRINT_TEST("FT_STRCAT");

	char array1[20] = "hello";
	char *array2 = "pool";

	printf("array1 == %s, array2 == %s\n", array1, array2);
	ft_strcat(array1, array2);
	printf("arrray1 after strcat == %s\n\n", array1);	
}

static void ft_isalpha_test(void)
{	
	char *letters = "abcdefghijklmnopqrstuvwxyz";
        char *digits = "123456789";
        char *special = ";<,.?>=)(!@#$%(*&^%#{}||<`+-__*";
	
	PRINT_TEST("FT_ISALPHA (chars)");
        for (int i = 0; i < 26; i++) {
                printf("my   %c == %d | ", letters[i], ft_isalpha(letters[i]));
                printf("libc %c == %d\n", letters[i], isalpha(letters[i]));
        }

	PRINT_TEST("FT_ISALPHA (digits)");
        for (int i = 0; i < 9; i++) {
                printf("my   %c == %d | ", digits[i], ft_isalpha(digits[i]));
                printf("libc %c == %d\n", digits[i], isalpha(digits[i]));
        }
	
	PRINT_TEST("FT_ISALPHA (special chars)");
        for (int i = 0; i < 31; i++) {
                printf("my   %c == %d | ", special[i], ft_isalpha(special[i]));
                printf("libc %c == %d\n", special[i], isalpha(special[i]));
        }
	printf("\n");
}

static void ft_isdigit_test(void)
{
	char *letters = "abcdefghijklmnopqrstuvwxyz";
        char *digits = "123456789";
        char *special = ";<,.?>=)(!@#$%(*&^%#{}||<`+-__*";

	PRINT_TEST("FT_ISDIGIT (chars)");
        for (int i = 0; i < 26; i++) {
                printf("my   %c == %d | ", letters[i], ft_isdigit(letters[i]));
                printf("libc %c == %d\n", letters[i], isdigit(letters[i]));
        }


	PRINT_TEST("FT_ISDIGIT (digit)");
        for (int i = 0; i < 9; i++) {
                printf("my   %c == %d | ", digits[i], ft_isdigit(digits[i]));
                printf("libc %c == %d\n", digits[i], ft_isdigit(digits[i]));
        }
	
	PRINT_TEST("FT_ISDIGIT (special chars)");
        for (int i = 0; i < 31; i++) { 
                printf("my   %c == %d | ", special[i], ft_isdigit(special[i]));
                printf("libc %c == %d\n", special[i], ft_isdigit(special[i]));
        }
	printf("\n");
}

static void ft_isalnum_test(void)
{	
	char *letters = "abcdefghijklmnopqrstuvwxyz";
        char *digits = "123456789";
        char *special = ";<,.?>=)(!@#$%(*&^%#{}||<`+-__*";

	PRINT_TEST("FT_ISALNUM (chars)");
        for (int i = 0; i < 26; i++) {
                printf("my   %c == %d | ", letters[i], ft_isalnum(letters[i]));
                printf("libc %c == %d\n", letters[i], isalnum(letters[i]));
        }

	PRINT_TEST("FT_ISALPHA (digits)");
        for (int i = 0; i < 9; i++) {
                printf("my   %c == %d | ", digits[i], ft_isalnum(digits[i]));
                printf("libc %c == %d\n", digits[i], isalnum(digits[i]));
        }
	
	PRINT_TEST("FT_ISALPHA (special chars)");
        for (int i = 0; i < 31; i++) {
                printf("my   %c == %d | ", special[i], ft_isalnum(special[i]));
                printf("libc %c == %d\n", special[i], isalnum(special[i]));
        }
	printf("\n");
}

int main(void)
{
	ft_bzero_test();
	ft_strcat_test();
	ft_isdigit_test();
	ft_isalpha_test();
	ft_isalnum_test();
	return 0;
}

