#include<stdio.h>
#include<stdlib.h>
struct ndt
{
	int data;
	struct ndt* next;
};
typedef  struct ndt node;
void display(void);
void createbeg(void);
void create(void);
void insert(void);
node *start;

void main()
{
int choise;
do{
printf("this is a program to implement a linked list\n");
printf("press 1 for creation\n");
printf("press 2 for insert\n");
printf("press 3 for Display\n");
printf("press 4 for createbeg\n");
printf("press 5 for exit\n");
scanf("%d",&choise);
switch(choise)
{
case 1:create(); break;
case 2:insert(); break;
case 3:display(); break;
case 4:createbeg(); break;
case 5:exit(0); break;
}
}while(1);
}
void display(void)
{
	node *temp1;
	temp1=start;
	printf("START->");
	while(temp1!=NULL)
	{
		printf("%d-->",temp1->data);
		temp1=temp1->next;
	}
	printf("END\n");
}
void create(void)
{
	node *temp;
	temp= ( node*)malloc(sizeof(node));
	if(temp!=NULL)
	{
		printf("enter value for data");
		scanf("%d",&temp->data);
		temp->next=NULL;
		start=temp;
		
	}
	else
	{
		printf("memory could not be allocation by opreating");
	}
}
void insert(void)
{
	node *temp;
	node *temp1=start;
	while(temp1->next!=NULL)
{
	temp1=temp1->next;
}
temp=(node *)malloc(sizeof (node));
if(temp==NULL)
{
	printf("memory not allocatoin");
}
else
{
	printf("Enter Data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp1->next=temp;
}
}
void createbeg(void)
{
	node *temp;
	temp= ( node*)malloc(sizeof(node*));
	if(temp!=NULL)
	{
		printf("enter value for data");
		scanf("%d",&temp->data);
		temp->next=start;
		start=temp;
		
	}
	else
	{
		printf("memory could not be allocation by opreating");
	}
}
