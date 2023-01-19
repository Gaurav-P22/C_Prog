//Check that the Given Number is prime or not using function named CheckPrime
#include<stdio.h>
#include<conio.h>
void main()
{
int CheckPrime(int);
int n;
clrscr();
printf("Enter the Number to check that the Number is Prime or Not");
scanf("%d",&n);
n=CheckPrime(n);
if(n==1)
printf("The Number is Not Prime");
else
printf("The Number is Prime");
getch();
}
int CheckPrime(int n)
{
int i,flag=0;
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
return flag;
}