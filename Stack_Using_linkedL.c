// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
    int info;
    struct nodeType *next;
}node;
node *head=NULL;

void push(node **head,int item)
{
     node *ptr;
     ptr=(node *)malloc(sizeof(node));
     ptr->info=item;
     if(*head==NULL)
     {
         *head=ptr;
         ptr->next=NULL;
     }
     else
     {
         ptr->next=*head;
         *head=ptr;
     }
}
void pop(node **head)
{
    int item2;
    if(*head==NULL)
    {
        printf("The Stack is UnderFlow");
    }
    else
    {
        item2=(*head)->info;
        printf("the value is=%d",item2);
        *head=(*head)->next;
      
    }
}
int main() {
    int ch,item;
while(1)
{
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the value of item");
        scanf("%d",&item); 
        push(&head,item);
        break;
        case 2:
        pop(&head);
        break;
        default:
        exit(0);
    }
}

    return 0;
}
