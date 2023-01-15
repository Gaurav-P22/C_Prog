//Program to sum the two array and store in the third array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i;
void Sum(int[],int[],int);
clrscr();
printf("Enter the Elements of the first Array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the elements of the Second Array");
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
Sum(a,b,10);
getch();
}
void Sum(int a[],int b[],int n)
{
int i,c[10];
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
}
for(i=0;i<n;i++)
{
printf("%d ",c[i]);
}
}