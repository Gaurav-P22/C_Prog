#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,i,n,n2;
clrscr();
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
n2=n%10;
rev=rev*10+n2;
n=n/10;
}
printf("The Reverse is=%d",rev);
getch();
}