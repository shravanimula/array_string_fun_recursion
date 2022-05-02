#include <stdio.h>
#include <string.h>
void check_pal(char str[]);
int main()
{
	char str[100];		 
	printf("Enter a string:");
	gets(str);
	check_pal(str);	
}
void check_pal(char str[])
{
	int i=0,flag;
	int len=strlen(str)-1;
	while(len>i)
	{
		if(str[i++]!=str[len--])
		{
			//printf("string is not palindrome\n");
			flag=1;
		}
		else 
		{
			flag=0;
		}
	}
	
	if(flag==0)
	{
		printf("%s is a Palindrome String", str);
	}
	else 
	{
		printf("strings are not palindrome\n");
	}
}
