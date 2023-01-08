//A program to calculate the area of a Triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
void areaTri(int,int,int,float);
float s;
int a,b,c;
clrscr();
printf("Enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
areaTri(a,b,c,s);
}
void areaTri(int a,int b,int c,float s)
{
float area;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nThe area of the triangle is=\n%f",area);
getch();
}
