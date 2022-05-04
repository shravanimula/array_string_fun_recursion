#include"st_count.h"
int main()
{
	struct student db[10];
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':input(db); break;
			case 'p':print(db);break;
			case 'e':exit(0);
		}
																}
}
