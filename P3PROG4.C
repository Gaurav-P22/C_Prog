#include<stdio.h>
#include<conio.h>
void main()
{
int n;
void week(int);
clrscr();
printf("Enter the value from 1to 7 to print the Day");
scanf("%d",&n);
week(n);
getch();
}
void week(int n)
{
switch(n)
{
case 1:
puts("Monday");
break;
case 2:
puts("Tuesday");
break;
case 3:
puts("Wednesday");
break;
case 4:
puts("Thursday");
break;
case 5:
puts("Friday");
break;
case 6:
puts("Saturday");
break;
case 7:
puts("Sunday");
break;
default:
puts("Invalid");
}
}