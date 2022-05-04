#include <stdio.h>
#include<string.h>
struct student{
	char name[10];
	char branch[5];
	float cgpa;
};
void print(struct student []);
void print(struct student a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s\t%s\t%.2f\n",a[i].name,a[i].branch,a[i].cgpa);
	}
}
