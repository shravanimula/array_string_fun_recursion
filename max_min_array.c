#include<stdio.h>
int minmax(int a[],int n)
{
	int i,min,max;
	min=max=a[0];
	for(i=1; i<n; i++)
	{
		if(min>a[i])
			min=a[i];   
		if(max<a[i])
			max=a[i];       
	}
	printf("minimum of array is : %d\n",min);
	printf("maximum of array is : %d\n",max);
}
int main()
{
	int a[50],i,n,min,max;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter elements in array : ");	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	minmax(a,n);
	return 0;
}
