#include<stdio.h>
#include<conio.h>
void main()
{
void printArray(int[][3],int,int);
void printLowerElement(int[][3],int,int);
void printUpperElement(int[][3],int,int);

int a[3][3],i,j;
clrscr();
printf("Enter the ELement in the array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Array is=\n");
printArray(a,3,3);
printf("Array's Lower Triangular Matrix is=\n");
printLowerElement(a,3,3);
printf("Array's Upper Triangular Matrix is=\n");
printUpperElement(a,3,3);
printf("Array's Maximum Element is=\n");

getch();
}
void printArray(int a[][3],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
}
void printLowerElement(int a[][3],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i>=j)
{
printf("%d",a[i][j]);
}
}
}
}
void printUpperElement(int a[][3],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i<=j)
{
printf("%d",a[i][j]);
}
}
}
}
