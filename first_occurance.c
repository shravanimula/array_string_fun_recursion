#include <stdio.h>
void search_word(char [],char []);
int main()
{
	char str[50], word[50];
	printf("Enter a String:");
	gets(str);
	//fgets(str,100,stdin);
	printf("Enter the Word that you want to Search for:");
	gets(word);
	//fgets(word,50,stdin);
	search_word(str,word);
}
void search_word(char s1[],char s2[])
{
	int i,j,flag;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[0])
		{
			flag=1;
			for(j=0;s2[j]!='\0';j++)
			{
				if(s1[i+j]!=s2[j])
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1)
		{
			break;
		} 
		}
	if(flag==1)
	{
		printf("found the word\n");
	}
	else
	{
		printf("not found the word %s\n", s2);
	}
}
