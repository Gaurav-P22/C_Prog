//Wap to input elements in 2d array and print them
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3][3];
clrscr();
printf("Enter the nine elements of the array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
getch();
}