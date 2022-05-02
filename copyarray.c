#include<stdio.h>
void copyarray(int [],int);
int main()
{
	int array1[100];
	int size,i;
	printf("enter the size of the array:\n");
	scanf("%d",&size);
	printf("enter the elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("array1 elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array1[i]);
	}
	copyarray(array1,size);
}
void copyarray(int arr1[],int size)
{
	int array2[100],i;
	for(i=0;i<size;i++)
	{
		array2[i]=arr1[i];
	}
	printf("\ncopy the array of elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array2[i]);
	}
}
