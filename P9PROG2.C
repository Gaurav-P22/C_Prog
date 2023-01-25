//Write a program to function interchange to swap the value
#include<stdio.h>
#include<conio.h>
void main()
{
void Swap(int *,int *);
int a,b;
clrscr();
printf("Enter the Two value for the Swap");
scanf("%d%d",&a,&b);

Swap(&a,&b);
printf("After Swap the value of a=>%d and b=>%d",a,b);

getch();
}
void Swap(int *ptr1,int *ptr2)
{
int temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}