//Wap to transpose a 2d array
#include<stdio.h>
#include<conio.h>
void main()
{
void Transpose(int[][3],int);
int i,j,a[3][3];
clrscr();
printf("Enter the Nine Elements of th 2d Array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
Transpose(a,3);

getch();
}
void Transpose(int a[][3],int n)
{
int b[3][3],i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
}