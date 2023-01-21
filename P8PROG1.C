//Write a program to initialize a Structre
#include<stdio.h>
#include<conio.h>
void main()
{
struct student  //Creating a structure
{
int roll;
char name[30];
int age;
}s1; //Declaring a Structure
printf("Enter the Student Details Roll No	Name	Age");
scanf("%d%s%d",&s1.roll,&s1.name,&s1.age); //Initiaizing the Structure
printf("The Details are Roll No-> %d,Name-> %s, Age-> %d",s1.roll,s1.name,s1.age);
getch();
}