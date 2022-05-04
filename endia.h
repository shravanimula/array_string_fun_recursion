#include<stdio.h>
void endian(char *);
void endian(char *c)
{
	if(*c == 0x10)
	{
		printf("cpu follows little endian\n");
	}
	else
	{
		printf("cpu follows big endian\n");
	}
}
