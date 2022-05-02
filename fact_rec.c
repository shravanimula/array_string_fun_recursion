#include<stdio.h>
int find_fact(int);
int main()
{
	int num;
     	printf("Enter a number:");
  	scanf("%d",&num);
	find_fact(num);
	printf("factorial of %d is: %d",num, find_fact(num));
	return 0;
}
int find_fact(int n)
{
	if(n==0)
		return 1;  
	return(n*find_fact(n-1));
}
