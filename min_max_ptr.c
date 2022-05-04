#include <stdio.h>
#define MIN 0
#define MAX (n-1)
int min_max(int n , int *arr)
{
       	int i,j,temp;
	for(i=MIN;i<=MAX;i++)
	{
		for(j=i+1;j<=MAX;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<=MAX;i++)
		printf("%d\t",*(arr+i));
	printf("\nmaximum element is %d\n",*(arr+MAX));
	printf("minimum element is %d\n",*(arr+MIN));
}
int main()
{
	int arr[]={11,22,99,55,33,77,44};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("array elements is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	min_max(n,arr);
}
