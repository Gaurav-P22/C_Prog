#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float area;
char ch;
clrscr();
l1:
printf("Enter the radius of circle");
scanf("%d",&r);
area=3.14*r*r;
printf("The area=%f\n",area);
printf("Enter y if we want to find the area again\n");
fflush(stdin);
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{
goto l1;
 }
 else
getch();
}