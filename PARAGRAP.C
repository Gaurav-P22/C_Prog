//To print the word in a paragraph.
#include<conio.h>
#include<stdio.h>
void main()
{
char str1[100];
int c=1,i;
puts("Enter The Paragraph\n");
gets(str1);
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]==' ')
{
c=c+1;
}
}
printf("%d",c);
getch();
}