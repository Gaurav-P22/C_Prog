//Program to calculate the simple and compound Interest
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
float CalSI(int,int,int);
float CalCI(int,int,int);
float p,t,r,ci,si;
clrscr();
printf("Enter the Principle value,Interest and time");
scanf("%f%f%f",&p,&t,&r);
si=CalSI(p,t,r);
ci=CalCI(p,t,r);
printf("The Simple Interest is=\n%f",si);
printf("The Compound Interest is=\n%f",ci);
getch();
}
float CalSI(int p,int t,int r)
{
float si;
si=(p*t*r)/100.0;
return si;
}
float CalCI(int p,int t,int r)
{
float ci;
ci=p*(pow(((1+r)/100),t));
return ci;
}