//Reverse a Array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
printf("Enter the Elements of the Array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\nAfter Reverse the array is");
for(i=9;i>=0;i--)
{
printf("%d ",a[i]);
}
getch();

}