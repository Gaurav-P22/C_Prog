#include <stdio.h>
#include<stdlib.h>
//Stack Using Array
void push(int stack[],int *top,int item)
{
    (*top)++;
    stack[*top]=item;
}
void pop(int stack[],int *top)
{
    printf("The Value is =%d",(stack[*top]));
    stack[*top]=NULL;
    (*top)--;
}
int main() {
	//code
	int stack[4],top=-1,ch,n=4,item;
	while(1)
	{
	    printf("Enter your choice");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:
	        if(top==n-1)1
	        printf("The Stack is Overflow");
	        else{
	        printf("Enter the item value");
	        scanf("%d",&item);
	        push(stack,&top,item);}
	        break;
	        case 2:
	        if(top==-1)
	        printf("The Stack is UnderFlow");
	        else{
	       // printf("Enter the item value");
	       // scanf("%d",&item);
	        pop(stack,&top);}
	        break;
	        default:
	        exit(0);
	    }
	}
	return 0;
}
