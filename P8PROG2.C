//Write a c program to read and print the Employee Detail using Structure
#include<conio.h>
#include<stdio.h>
void main()
{
struct Employee
{
int EmpID;
char Name[30];
unsigned int salary;
char post[30];
}emp1;
clrscr();
printf("Enter the Empoyee Record");
printf("Emp Id =>");
scanf("%d",&emp1.EmpID);
fflush(stdin);
printf("\nEmp Name=>");
scanf("%[^\n]s",&emp1.Name);
printf("\nSalary=>");
scanf("%u",&emp1.salary);
fflush(stdin);
printf("\nPost=>");
scanf("%[^\n]s",&emp1.post);
printf("The Id is= %d ,Name= %s ,Salary=%u ,Post=%s ",emp1.EmpID,emp1.Name,emp1.salary,emp1.post);

getch();
}