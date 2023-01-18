#include<stdio.h>
#include<conio.h>
void main()
{
void Mul(int[3][3],int[3][3],int);
void Add(int[3][3],int[3][3],int);
int a[3][3],b[3][3],c[3][3],i,j,k;
clrscr();
printf("Enter the element of the first 3*3 Matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("\nEnter the 9 Element Again\n\b");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
Mul(a,b,3);
Add(a,b,3);
getch();
}
void Mul(int a[][3],int b[][3],int n)
{
int c[3][3],i,j,k;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("\nThe Multiplication of the two array\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
}
void Add(int a[][3],int b[][3],int n)
{
int i,j,c[3][3];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nThe Addition of two Array is\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}