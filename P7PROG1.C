//Write a program to swap the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
void Swap(char[],char[]);
char str1[30],str2[30];
clrscr();
printf("Enter the First String ");
gets(str1);
printf("Enter the Second String ");
gets(str2);
Swap(str1,str2);
printf("After Swap the First Strings Are -> ");
puts(str1);
printf("Second String are-> ");
puts(str2);
getch();
}
void Swap(char str1[],char str2[])
{
char temp[30];
strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);
}