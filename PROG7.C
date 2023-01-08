//Program to swap the two number without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
void Swap(int,int);
int n1,n2;
printf("Enter the two number to swap");
scanf("%d%d",&n1,&n2);
Swap(n1,n2);
getch();
}
void Swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("After swap the Number is=%d and %d",a,b);
}