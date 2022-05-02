#include<stdio.h>
#include<string.h>
char check_capital(char* str)
{
       	static int i=0;
	if(i<strlen(str)) 
	{
		if(str[i]>='A' && str[i]<='Z') 
		{
			return str[i];
		}
		else
		{
			i=i+1;
			return check_capital(str);
		}
	}
	else
		return 0;
}
int main()
{
	char str[50];
	char str1;
	printf("Enter string: ");
	fgets(str,50,stdin);
	str1=check_capital(str);
	if(str1==0)
		printf("Capital letter is not found in the string\n");
	else
		printf("First Capital letter is: %c\n", str1);
 	return 0;
}
