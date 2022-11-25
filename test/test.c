#include "../source/ft_isalpha.c"
#include "../source/ft_isdigit.c"
#include "../source/ft_isalnum.c"
#include "../source/ft_isascii.c"
#include "../source/ft_isprint.c"
#include "../source/ft_strlen.c"
#include "../source/ft_memset.c"
#include "../source/ft_bzero.c"
#include "../source/ft_memcpy.c"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printIntArr(int *arr, unsigned long size);


int main(void)
{
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_alpha\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isalpha('a') = %d | ft_isalpha('a') = %d\n", isalpha('a'), ft_isalpha('a'));
	printf("isalpha('A') = %d | ft_isalpha('A') = %d\n", isalpha('A'), ft_isalpha('A'));
	printf("isalpha('1') = %d | ft_isalpha('1') = %d\n", isalpha('1'), ft_isalpha('1'));
	printf("isalpha('!') = %d | ft_isalpha('!') = %d\n", isalpha('1'), ft_isalpha('!'));
	printf("isalpha('*') = %d | ft_isalpha('*') = %d\n", isalpha('1'), ft_isalpha('*'));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isdigit\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isdigit('a') = %d | ft_isdigit('a') = %d\n", isdigit('a'), ft_isdigit('a'));
	printf("isdigit('A') = %d | ft_isdigit('A') = %d\n", isdigit('A'), ft_isdigit('A'));
	printf("isdigit('1') = %d | ft_isdigit('1') = %d\n", isdigit('1'), ft_isdigit('1'));
	printf("isdigit('!') = %d | ft_isdigit('!') = %d\n", isdigit('!'), ft_isdigit('!'));
	printf("isdigit('*') = %d | ft_isdigit('*') = %d\n", isdigit('*'), ft_isdigit('*'));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isalnum\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isalnum('a') = %d | ft_isalnum('a') = %d\n", isalnum('a'), ft_isalnum('a'));
	printf("isalnum('A') = %d | ft_isalnum('A') = %d\n", isalnum('A'), ft_isalnum('A'));
	printf("isalnum('1') = %d | ft_isalnum('1') = %d\n", isalnum('1'), ft_isalnum('1'));
	printf("isalnum('!') = %d | ft_isalnum('!') = %d\n", isalnum('!'), ft_isalnum('!'));
	printf("isalnum('*') = %d | ft_isalnum('*') = %d\n", isalnum('*'), ft_isalnum('*'));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isascii\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isascii('a') = %d | ft_isascii('a') = %d\n", isascii('a'), ft_isascii('a'));
	printf("isascii('A') = %d | ft_isascii('A') = %d\n", isascii('A'), ft_isascii('A'));
	printf("isascii('1') = %d | ft_isascii('1') = %d\n", isascii('1'), ft_isascii('1'));
	printf("isascii('!') = %d | ft_isascii('!') = %d\n", isascii('!'), ft_isascii('!'));
	printf("isascii('*') = %d | ft_isascii('*') = %d\n", isascii('*'), ft_isascii('*'));
	unsigned char notAscii1 = 128, notAscii2 = 158;
	printf("isascii(%c) = %d | ft_isascii(%c) = %d\n", notAscii1, isascii(notAscii1), notAscii1, ft_isascii(notAscii1));
	printf("isascii(%c) = %d | ft_isascii(%c) = %d\n", notAscii2, isascii(notAscii2), notAscii2, ft_isascii(notAscii2));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_isprint\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("isprint('a') = %d |ft_isprint('a') = %d\n", isprint('a'), ft_isprint('a'));
	printf("isprint('A') = %d |ft_isprint('A') = %d\n", isprint('A'), ft_isprint('A'));
	printf("isprint('1') = %d |ft_isprint('1') = %d\n", isprint('1'), ft_isprint('1'));
	printf("isprint('!') = %d |ft_isprint('!') = %d\n", isprint('!'), ft_isprint('!'));
	printf("isprint('*') = %d |ft_isprint('*') = %d\n", isprint('*'), ft_isprint('*'));
	char notPrint1 = 0, notPrint2 = 15, notPrint3 = 31, notPrint4 = 127;
	printf("Unprintable test\n");
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint1, isprint(notPrint1), notPrint1, ft_isprint(notPrint1));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint2, isprint(notPrint2), notPrint2, ft_isprint(notPrint2));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint3, isprint(notPrint3), notPrint3, ft_isprint(notPrint3));
	printf("isprint(%c) = %d |ft_isprint(%c) = %d\n", notPrint4, isprint(notPrint4), notPrint4, ft_isprint(notPrint4));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test ft_strlen\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("strlen(\"abcdefg\") = %lu | ft_strlen(\"abcdefg\") = %lu\n", strlen("abcdefg"), ft_strlen("abcdefg"));
	printf("strlen(\"123456789\") = %lu | ft_strlen(\"123456789\") = %lu\n", strlen("123456789"), ft_strlen("123456789"));
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test memset\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

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
	for (int count = 0; count < 7; count++)
	{
		printf(
			"memset(%s	, %c, %d) = %s | ft_memset(%s, %c, %d) = %s\n",
			dest1, src, count, (char *)memset((void *)dest1, src, count),
			dest2, src, count, (char *)ft_memset((void *)dest2, src, count));
	}
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test bzero\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
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
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Test memcpy\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	//문자열
	char memcpyDest1[6] = "12345";
	char memcpyDest1Copy[6] = "12345";
	char memcpySrc1[6] = "abcde";
	printf(
		"memcpy = %s | ft_memcpy = %s\n",
		memcpy(memcpyDest1,memcpySrc1,sizeof(memcpySrc1)),
		ft_memcpy(memcpyDest1Copy,memcpySrc1,sizeof(memcpySrc1))
	);

	//숫자 배열
	int memcpyDest2[6] = {1,2,3,4,5,6};
	int memcpyDest2Copy[6] = {1,2,3,4,5,6};
	int memcpySrc2[6] = {11,12,13,14,15,16};
	memcpy(memcpyDest2,memcpySrc2,sizeof(memcpySrc2));
	ft_memcpy(memcpyDest2Copy,memcpySrc2,sizeof(memcpySrc2));
	printf("memcpy = ");
	printIntArr(memcpyDest2, 6);
	printf(" | ft_memcpy = ");
	printIntArr(memcpyDest2Copy, 6);
	printf("\n");
}


void printIntArr(int *arr, unsigned long size)
{
	unsigned long index = 0;
	while (index < size)
	{
		printf("%d ", arr[index]);
		index++;
	}
}