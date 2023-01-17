//Search the Number in the given array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,flag=0;
clrscr();
printf("Enter the Array Element");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the Element you have to search ");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(a[i]==n)
{
flag=1;
}
}
if(flag==1)

printf("The Number is Found ");
else
printf("The number is not Found");
getch();
}