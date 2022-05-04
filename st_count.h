#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
const int max=10;
int cnt=0;
struct student
{
	char name[20];
	int roll;
	float mark;
};
void printMenu(void);
void input(struct student *);
void print(struct student *);
void print(struct student *ptr)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%d:%s:%0.1f\n",ptr[i].roll, (ptr+i)->name,ptr[i].mark);
}
void input(struct student *ptr)
{
	if(cnt==max) 
	{
		printf("memory full\n");
	}
	__fpurge(stdin);
	printf("Enter name:");
	scanf("%s",(ptr+cnt)->name);
	printf("enter roll:");
	scanf("%d",&(ptr+cnt)->roll);
	printf("Enter mark:");
	scanf("%f",&((ptr+cnt)->mark));
	cnt++;
	printf("count the student number:%d\n",cnt);
}
void printMenu()
{
	printf("\n******MENU******\n");
	printf("i:input a student record\n");
	printf("p: print all the existing records\n");
	printf("e:exit\n");
	printf("enter your choice:\n");
}
