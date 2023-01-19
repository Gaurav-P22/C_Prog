//Write a Program to impement strlen(),strcpy(),strcat() using Function
#include<stdio.h>
#include<conio.h>
void main()
{
int strlen1(char[]);
void mystrlen(char[]);
void mystrcpy(char[],char[]);
void mystrcat(char[],char[]);
char str1[30],str2[30];
clrscr();
puts("Enter the First String");
gets(str1);
puts("Enter the Second String");
gets(str2);
mystrlen(str1);
mystrcat(str1,str2);
mystrcpy(str1,str2);

getch();
}
void mystrlen(char str1[])
{
int c=0,i;
for(i=0;str1[i]!='\0';i++)
{
c=c+1;
}
printf("The Length of the String is=%d\n",c);

}
int strlen1(char str1[])
{
int c=0,i;
for(i=0;str1[i]!='\0';i++)
{
c=c+1;
}
return c;
}
void mystrcpy(char str1[],char str2[])
{
int i;
for(i=0;str2[i]!='\0';i++)
{
str1[i]=str2[i];
}
str1[i]='\0';
printf("After copy the String is");
puts(str1);
}
void mystrcat(char str1[],char str2[])
{
int i,j;
j=strlen1(str1);
for(i=0;str2[i]!=0;i++)
{
str1[i+j]=str2[i];
}
str1[i+j]='\0';
puts(str1);
}