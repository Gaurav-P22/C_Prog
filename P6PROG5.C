//Print the sum of the rows and column
#include<stdio.h>
#include<conio.h>
void main()
{
int ar[10][10],i,j,m,n,sum=0;
printf("Enter the order of the Matrix");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&ar[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum=sum+ar[i][j];
}
printf("The Sum of %d row is=%d\n",i+1,sum);
sum=0;
}
sum=0;
for(j=0;j<n;j++)
{
for(i=0;i<m;i++)
{
sum=sum+ar[i][j];
}
printf("The Sum of %d column is =%d\n",j+1,sum);
sum=0;
}
getch();
}