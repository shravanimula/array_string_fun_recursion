#include <stdio.h>
#include <string.h> 
void concat_str(char *,const char *);
int main()
{
	char str1[100], str2[100];
	int i, j;
	printf("Enter the First String :");
	gets(str1);
	printf("Enter the Second String:");
	gets(str2);
	concat_str(str1,str2);
}
void concat_str(char *s1,const char *s2)
{
	int i,j;
	i=0;
	while(*(s1+i)!='\0')
	{
		i++;
	}
	j = 0;
	while(*(s2+j)!='\0')
	{
		*(s1+i)= *(s2+j);
		i++;
		j++;
	}
	*(s1+i) = '\0';
	printf("String after the Concatenate = %s\n", s1);
	int cnt=0;
	for(i=0;*(s1+i)!='\0';i++)
	{
		cnt++;
	}
	printf("length of new string is:%d\n",cnt);
	
}
