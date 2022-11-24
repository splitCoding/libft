#include "../source/ft_isalpha.c"
#include "../source/ft_isdigit.c"
#include "../source/ft_isalnum.c"
#include "../source/ft_isascii.c"
#include "../source/ft_isprint.c"
#include "../source/ft_strlen.c"
#include "../source/ft_memset.c"
#include "../source/ft_bzero.c"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_alpha\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isalpha('a') = %d | ft_isalpha('a') = %d\n", isalpha('a'), ft_isalpha('a'));
	printf("isalpha('A') = %d | ft_isalpha('A') = %d\n", isalpha('A'), ft_isalpha('A'));
	printf("isalpha('1') = %d | ft_isalpha('1') = %d\n", isalpha('1'), ft_isalpha('1'));
	printf("isalpha('!') = %d | ft_isalpha('!') = %d\n", isalpha('1'), ft_isalpha('!'));
	printf("isalpha('*') = %d | ft_isalpha('*') = %d\n", isalpha('1'), ft_isalpha('*'));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isdigit\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isdigit('a') = %d | ft_isdigit('a') = %d\n", isdigit('a'), ft_isdigit('a'));
	printf("isdigit('A') = %d | ft_isdigit('A') = %d\n", isdigit('A'), ft_isdigit('A'));
	printf("isdigit('1') = %d | ft_isdigit('1') = %d\n", isdigit('1'), ft_isdigit('1'));
	printf("isdigit('!') = %d | ft_isdigit('!') = %d\n", isdigit('!'), ft_isdigit('!'));
	printf("isdigit('*') = %d | ft_isdigit('*') = %d\n", isdigit('*'), ft_isdigit('*'));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isalnum\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isalnum('a') = %d | ft_isalnum('a') = %d\n", isalnum('a'), ft_isalnum('a'));
	printf("isalnum('A') = %d | ft_isalnum('A') = %d\n", isalnum('A'), ft_isalnum('A'));
	printf("isalnum('1') = %d | ft_isalnum('1') = %d\n", isalnum('1'), ft_isalnum('1'));
	printf("isalnum('!') = %d | ft_isalnum('!') = %d\n", isalnum('!'), ft_isalnum('!'));
	printf("isalnum('*') = %d | ft_isalnum('*') = %d\n", isalnum('*'), ft_isalnum('*'));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isascii\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isascii('a') = %d | ft_isascii('a') = %d\n", isascii('a'), ft_isascii('a'));
	printf("isascii('A') = %d | ft_isascii('A') = %d\n", isascii('A'), ft_isascii('A'));
	printf("isascii('1') = %d | ft_isascii('1') = %d\n", isascii('1'), ft_isascii('1'));
	printf("isascii('!') = %d | ft_isascii('!') = %d\n", isascii('!'), ft_isascii('!'));
	printf("isascii('*') = %d | ft_isascii('*') = %d\n", isascii('*'), ft_isascii('*'));
	unsigned char notAscii1 = 128, notAscii2 = 158;
	printf("isascii(%c) = %d | ft_isascii(%c) = %d\n", notAscii1, isascii(notAscii1), notAscii1, ft_isascii(notAscii1));
	printf("isascii(%c) = %d | ft_isascii(%c) = %d\n", notAscii2, isascii(notAscii2), notAscii2, ft_isascii(notAscii2));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isprint\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isprint('a') = %d |ft_isprint('a') = %d\n", isprint('a'),ft_isprint('a'));
	printf("isprint('A') = %d |ft_isprint('A') = %d\n", isprint('A'),ft_isprint('A'));
	printf("isprint('1') = %d |ft_isprint('1') = %d\n", isprint('1'),ft_isprint('1'));
	printf("isprint('!') = %d |ft_isprint('!') = %d\n", isprint('!'),ft_isprint('!'));
	printf("isprint('*') = %d |ft_isprint('*') = %d\n", isprint('*'),ft_isprint('*'));
	char notPrint1 = 0, notPrint2 = 15, notPrint3 = 31, notPrint4 = 127;
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint1, isprint(notPrint1), notPrint1,ft_isprint(notPrint1));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint2, isprint(notPrint2), notPrint2,ft_isprint(notPrint2));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint3, isprint(notPrint3), notPrint3,ft_isprint(notPrint3));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint4, isprint(notPrint4), notPrint4,ft_isprint(notPrint4));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_strlen\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("strlen(\"abcdefg\") = %lu | ft_strlen(\"abcdefg\") = %lu\n", strlen("abcdefg"), ft_strlen("abcdefg"));
	printf("strlen(\"123456789\") = %lu | ft_strlen(\"123456789\") = %lu\n", strlen("123456789"), ft_strlen("123456789"));


	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test memset\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	
	/*
	//무조건 bus error
	char *dest1 = "0123";
	memset(dest1, '*', 1); 

	//널문자를 포함한 길이까지 실행가능 그 이상은 error 
	char dest2[5] = "0123";
	memset(dest2, '*', 5); 

	//길이 제한 없이 실행 가능
	char *dest3 = (char *)malloc(sizeof(char) * 6);
	dest3[5] = 0;
	for(int i=0;i<5;i++){
		dest3[i] = '0' + i;
	}
	memset(dest3, '*', 6); 
	*/

	char dest1[6] = "12345";
	char dest2[6] = "12345";
	char src = '*';
	for(int count = 0; count < 7; count++)
	{
		printf(
			"memset(%s, %c, %d) = %s | ft_memset(%s, %c, %d) = %s\n", 
			dest1, src, count, (char *)memset((void *)dest1, src, count), 
			dest2, src, count,  (char *)ft_memset((void *)dest2, src, count)
		);
	}

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test bzero\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	char dest3[10] = "0123456789";
	char dest4[10] = "0123456789";

	printf("bzero Before	=	");
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", dest3[i]);
	}
	bzero(dest3, 10);
	printf("\nbzero After	=	");
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", dest3[i]);
	}
	printf("\nft_bzero Before	=	");
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", dest4[i]);
	}
	printf("\nft_bzero After	=	");
	ft_bzero(dest4, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", dest4[i]);
	}
	printf("\n");
}
