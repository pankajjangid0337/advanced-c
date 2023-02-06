#include<stdio.h>
#include<conio.h>
struct newdatatype
{
	int roll;
	char name[20];
};
typedef struct newdatatype student;
	void main()
	{
		student st1;
		printf("enter roll no");
		scanf("%d",&st1.roll);
		printf("enter name");
		scanf("%s",&st1.name);
		printf("the datails is of students are \n");
		printf("%d\n",st1.roll );
		printf("%s",st1.name);
	}
