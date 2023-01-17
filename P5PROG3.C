//Print the maximum and Minimum Element of the Array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,pass,temp;
clrscr();
printf("Enter the Elements of the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(pass=1;pass<10;pass++)
{
for(i=0;i<10-pass;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}

 printf("Minimum Element of the array %d",a[0]);
 printf("\nMaximum Element of the array %d",a[9]);
getch();
}