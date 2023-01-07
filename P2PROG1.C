#include<stdio.h>
#include<conio.h>
void main()
{
void CheckEqual(int,int);
int a,b;
printf("Enter the number1 and number2\n");
scanf("%d%d",&a,&b);
CheckEqual(a,b);
getch();

}
void CheckEqual(int a,int b)
{
if(a==b)
{
printf("The Entered Number are Equal");
}
else
{
printf("The Entered Number are Not Equal");
}
}