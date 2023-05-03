// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
    int info;
    struct nodeType *next;
}node;

void enqueue(node **front,node **rear,int item)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;

    if(front==NULL &&rear==NULL)
	*front=*rear=ptr;

    else
    {
	(*rear)->next=ptr;
	*rear=ptr;
    }
     ptr->next=NULL;
}

void dequeue(node **front,node **rear)
{
    if(*front==NULL&&*rear==NULL)
	printf("The List is empty");
	else
	{
	    printf("%d",((*front)->info));
	    *front=(*front)->next;
	}
}


int main() {
    // Write C code here
node *front=NULL;
node *rear=NULL;
int item;
clrscr();
while(1)
{
    int ch;
    printf("Enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
	printf("Enter the item");
	scanf("%d",&item);
	enqueue(&front,&rear,item);
	break;
	case 2:
	dequeue(&front,&rear);
	break;
	default:
	exit(0);
    }
}
return 0;
}