#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
void compare(char[],char[]);
char str1[20]={"Very"};
char str2[20]={"very"};
compare(str1,str2);
getch();

}
void compare(char str1[],char str2[])
{
int k;
k=strcmpi(str1,str2);
printf("%d",k);
if(k==0)
{
puts("String is equal");
}
else
{
puts("String is not equal");
}
}