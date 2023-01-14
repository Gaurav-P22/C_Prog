//Program to calculate the sum of digit the given Number
#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,sum=0;
clrscr();
printf("Enter the number to find the sum of the digits");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("%d",sum);
getch();


}