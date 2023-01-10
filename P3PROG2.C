#include<conio.h>
#include<stdio.h>
void main()
{
void Color(char);
char ch;
clrscr();
printf("Enter the code in Upper case to print the color");
scanf("%c",&ch);
Color(ch);
getch();
}
void Color(char ch)
{
switch(ch)
{
case 'R':
printf("Red");
break;
case 'G':
printf("Green");
break;
case 'B':
printf("Black");
break;
case 'O':
printf("Orange");
break;
case 'Y':
printf("Yellow");
break;
default:
printf("Invalid");
}
}