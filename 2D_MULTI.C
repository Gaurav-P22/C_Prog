#include<stdio.h>
#include<conio.h>
void main()
{
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

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
getch();
}