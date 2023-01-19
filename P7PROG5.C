//Wap to check that the given String is Palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
void CheckPalindrome(char[]);
char str1[30];
clrscr();
printf("Enter the String");
gets(str1);
CheckPalindrome(str1);
getch();
}
void CheckPalindrome(char str1[])
{
char str2[30];
strcpy(str2,str1);
strrev(str2);
puts(str1);
if(strcmpi(str2,str1)==0)
{
printf("The String is Palindrome");
}
else
{
printf("Not Palindrome");
}
}
