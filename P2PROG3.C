//Check the number is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
int EveOdd(int);
int a,n;
printf("Enter the two Number");
scanf("%d",&a);
n=EveOdd(a);
if(n==0)
printf("The Number is Even");
else
printf("The Number is odd");
getch();
}
int EveOdd(int a)
{
if(a%2==0)
{
return 0;
}
else
{
return 1;
}
}