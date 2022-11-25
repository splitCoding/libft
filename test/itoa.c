static int get_long_len(long num)
{
	if(num < 0)
		num *= -1;
	int len = 1;
	int compare = 10;
	while(compare <= num)
	{
		len++;
		compare *= 10;
	}
	return len;
}

#include <stdlib.h>
#include <stdio.h>
char * itoa(long num)
{
	int len = get_long_len(num);
	char *arr = (char *)malloc(len);
	arr[len] = 0;
	len--;
	while(len > -1)
	{
		*(arr + len) = '0' + ( num % 10 );
		num /= 10;
		len--;
	}
	return arr;
}