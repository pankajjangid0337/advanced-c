#include<stdio.h>
struct newdatatype
{
	int roll;
	int marks;
	char name[20];
};
typedef struct newdatatype student;
	void main()
	{
		student st[5];
		int i;
		for(i=0;i<3;i++)
		{
			scanf("%d %s %d",&st[i].roll,&st[i].name,&st[i].marks);
		}
			for(i=0;i<3;i++)
		{
			printf("%d %s %d",st[i].roll,st[i].name,st[i].marks);
		}
	}  
