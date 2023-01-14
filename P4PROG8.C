//Program to calculate the Reverse of the given Number
#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,sum=0;
clrscr();
printf("Enter the number to find the reverse the digits");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
sum=sum*10+m;
n=n/10;
}
printf("%d",sum);
getch();


}