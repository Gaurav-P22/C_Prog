//Write a program to search an element in array using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
void checkElement(int *,int *,int);
int ar[10],i,n;
clrscr();
printf("Enter the Elements in Array");
for(i=0;i<10;i++)
{
printf("\nEnter ar[%d]=",i);
scanf("%d",&ar[i]);
}
printf("Enter the Number to search");
scanf("%d",&n);
checkElement(ar,&n,10);
getch();
}
void checkElement(int *p,int *n1,int n)
{
int flag=0,i;
for(i=0;i<n;i++)
{
if(*n1==*(p+i))
{
flag=1;
}
}
if(flag==1)
{
printf("\nThe Number is Found");
}
else
printf("The Number is Not Found");
}