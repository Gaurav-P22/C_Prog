#include<stdio.h>
#include<conio.h>
void main()
{
int factorial(int);
int n;
clrscr();
printf("Enter the number to find the factorial\n");
scanf("%d",&n);
printf("The factorial of the Number is %d",factorial(n));
getch();
}
int factorial(int n1)
{
if(n1==0)
return 1;
else
{
return (n1*factorial(n1-1));
}
}
