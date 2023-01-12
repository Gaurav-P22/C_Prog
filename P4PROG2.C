//wap to Sum of n natural Number
#include<stdio.h>
#include<conio.h>
void main()
{
void sumNum(int);
int n;
clrscr();
printf("Enter the value of the N");
scanf("%d",&n);
sumNum(n);
getch();
}
void sumNum(int n)
{
int sum=0,i;
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\nSum of n Natural number is=%d",sum);
}