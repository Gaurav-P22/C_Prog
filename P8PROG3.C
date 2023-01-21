//Write a Program to implement Nested Structure
#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
int id;
char Name[30];
struct Allowance
{
int basicSal;
int HRA;
int DA;
}allow;
}e1;
clrscr();
fflush(stdin);
printf("Enter the id,Nameand,basic Salary,HRA,DA");
scanf("%d %s %d %d %d",&e1.id,&e1.Name,&e1.allow.basicSal,&e1.allow.HRA,&e1.allow.DA);
printf("The id= %d ,\n Name= %s,\n basic Salary= %d ,\n HRA=%d ,\n DA=%d",e1.id,e1.Name,e1.allow.basicSal,e1.allow.HRA,e1.allow.DA);

getch();
}