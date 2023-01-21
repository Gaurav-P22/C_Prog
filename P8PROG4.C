//Write a program to demonstrate a structure using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
int roll;
char name[30];
char gender;
int age;
};
struct student s1;
struct student *ptr;
ptr=&s1;
printf("\n-------------------------------");
printf("\nEnter the Student Record");
printf("\nEnter the Roll No=>");
scanf("%d",&ptr->roll);
fflush(stdin);
printf("Enter the Name of the student=>");
gets(ptr->name);
fflush(stdin);
printf("Enter the Gender=>");
scanf("%c",&ptr->gender);
printf("Enter the age=>");
scanf("%d",&ptr->age);
printf("-------------------------------");
printf("\nRoll No->%d ,\nName->%s,\nGender->%c,\nAge->%d",ptr->roll,ptr->name,ptr->gender,ptr->age);

getch();
}