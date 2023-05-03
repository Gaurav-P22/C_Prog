#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void EnQueue(int Q[],int *front,int *rear,int item,int size)
{
if(*rear==size-1)
{
printf("The Queue is overflow");
}

else if(*front==-1)
{
*front=*rear=0;
Q[*rear]=item;
}
else
{
(*rear)++;
Q[*rear]=item;

}

}

void DeQueue(int Q[],int *front,int *rear)
{
if(*front==-1&&(*rear)==-1)
{
printf("The Queue is Underflow");
}
else
{
printf("The Num is %d\n",Q[*front]);
if(*front==(*rear))
{
(*front)=(*rear)=-1;
}
else{

(*front)++;
}
}
}

void main()
{
int front=-1,rear=-1,ch,Q[4],item;
while(1)
{
printf("ENter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the item");
scanf("%d",&item);
EnQueue(Q,&front,&rear,item,4);
break;
case 2:
DeQueue(Q,&front,&rear);
break;
default:
exit(0);
}

}
getch();
}