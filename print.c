#include"print.h"
int main()
{
	struct student array[5];
	int i;
	for(i=0;i<5;i++)
	{
    		printf(" enter the details of student %d\n",i+1);
		printf(" enter name:");
		scanf("%s",array[i].name);
		printf(" enter a branch:");
		scanf("%s",array[i].branch);
		printf(" enter cgpa:");
		scanf(" %f",&array[i].cgpa);
	}
	printf("\n");
	print(array);
}
