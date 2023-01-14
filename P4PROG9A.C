//Program to find the Armstrong Number between a Range.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n1,sum1,sum=0,n2,c=0,temp,x,y;
clrscr();
printf("Enter a Number");
scanf("%d%d",&x,&y);
while(x<=y)
{
n1=x;
sum=0;
c=0;

sum1=n1;
temp=n1;
while(temp>0)
{
temp=temp/10;
c++;
}
while(n1>0)
{
n2=n1%10;
sum=sum+pow(n2,c);
n1=n1/10;
}
if(sum1==sum)
printf("The No is Armstrong%d",sum);
//getch();
x++;
}
getch();
}