//Wap to print the sum of the Diagonal Elements
#include<conio.h>
#include<stdio.h>
void main()
{
void printDiagonal(int[][3],int);
int a[3][3],i,j;
clrscr();
printf("Enter the 9 elemnts of 2d array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printDiagonal(a,3);
getch();
}
void printDiagonal(int a[][3],int n)
{
int i,j,sum=0;

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}

}
printf("The Sum of the Diagonal Array of the 2d Array= %d",sum);
}
