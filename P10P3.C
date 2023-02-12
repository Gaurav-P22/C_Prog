#include<stdio.h>
#include<conio.h>
void main()
{
extern res;
void per();
printf("Enter the Result to caluculate Percentage");
scanf("%d",&res);
per();
getch();
}
void per()
{
extern res;
printf("\nThe Percentage is =%d",res/5);
}