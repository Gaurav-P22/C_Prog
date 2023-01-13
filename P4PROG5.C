//Program to print the febonacci series
#include<stdio.h>
#include<conio.h>
void main()
{

int n,i;
int n3,n2=1,n1=0;
printf("Enter the number of digit");
scanf("%d",&n);
printf("%d %d ",n1,n2);
for(i=3;i<=n;i++)
{
n3=n1+n2;
printf("%d ",n3);
n1=n2;
n2=n3;
}
getch();
}