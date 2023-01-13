//Check that the given number is Prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
void checkPrime(int *);
int num,i;
int *p;
clrscr();
printf("Enter the number to check the number is Prime or Not\n");
scanf("%d",&num);
checkPrime(&num);
getch();
}
void checkPrime(int *p)
{
int i,flag=0;
for(i=2;i<=*p/2;i++)
{
if(*p%i==0)
{
printf("The Number is not a Prime number");
flag=1;
}
}
if(flag==0)
{
printf("The Number is Prime Number");
}
}